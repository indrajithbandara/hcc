// RUN: %cxxamp -emit-llvm -S -c %s -o -|%cppfilt|%FileCheck %s
// RUN: %gtest_amp %s -DUSING_GTEST=1 -o %t && %t
#include <cstdlib> //for size_t
//Serialization object decl
namespace Concurrency {
class Serialize {
 public:
  Serialize():x(0) {}
  void Append(size_t sz, const void *s) {
    x++;
  }
  int x;
};
template<typename T>
class gmac_array {
 public:
  __attribute__((annotate("serialize")))/* For compiler */
   void __cxxamp_serialize(Serialize& s) const {
     s.Append(0, NULL);
   }
   T t;
};
}
class nontemplate {
  public:
  __attribute__((annotate("serialize")))/* For compiler */
    void __cxxamp_serialize(Concurrency::Serialize& s) const {
      s.Append(0, NULL);
    }
};
class baz {
 public:
  __attribute__((annotate("serialize")))/* For compiler */
  void __cxxamp_serialize(Concurrency::Serialize& s) const;
 private:
  Concurrency::gmac_array<float> foo;
  Concurrency::gmac_array<float> bar;
  nontemplate nt;
};

int kerker(void) restrict(amp,cpu) {
  baz b1;
  Concurrency::Serialize s;
  b1.__cxxamp_serialize(s);
  return 1;
}
#ifdef USING_GTEST
// The definition should be generated by clang
// CHECK: call {{.*}}void @Concurrency::gmac_array<float>::__cxxamp_serialize
// Executable tests
#include <gtest/gtest.h>
TEST(Serialization, Call) {
  baz bl;
  Concurrency::Serialize s;
  bl.__cxxamp_serialize(s);
  EXPECT_EQ(3, s.x);
}
#endif