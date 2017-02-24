// Regression test to check that clang-format does not leave behind temporary
// files on Windows when doing in-place formatting.
// RUN: rm %T/inplace*
// RUN: cp %s %T/inplace.cpp
// RUN: clang-format -style=LLVM -i %T/inplace.cpp
// RUN: ls %T > %T/files.txt
// RUN: FileCheck -strict-whitespace -input-file=%T/files.txt %s

// CHECK-NOT: RF{{.*}}.TMP

// The file needs to be larger than 16kiB so that Windows creates a real file
// mapping object for it.
 int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
int this_is_my_int_there_are_many_like_it_but_this_one_is_mine;
