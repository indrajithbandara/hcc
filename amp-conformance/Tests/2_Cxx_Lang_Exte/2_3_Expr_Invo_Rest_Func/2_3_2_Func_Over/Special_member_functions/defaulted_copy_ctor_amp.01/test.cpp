// Copyright (c) Microsoft
// All rights reserved
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
// THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE, MERCHANTABLITY OR NON-INFRINGEMENT.
// See the Apache Version 2.0 License for specific language governing permissions and limitations under the License.
/// <tags>P0</tags>
/// <summary>Test whether defaulted copy constructors have restrict(amp) specifiers.</summary>
#include <amptest.h>
#include <amptest_main.h>
#include "../common_defaulted_copy_ctor_amp.01.h"
using namespace concurrency;
using namespace concurrency::Test;

int test() restrict(amp)
{
	A1 a1;
	A1 a1c(a1);

	A2 a2;
	A2 a2c(a2);

	A3 a3;
	A3 a3c(a3);

	A4 a4;
	A4 a4c(a4);

	A5 a5;
	A5 a5c(a5);

	A6 a6;
	A6 a6c(a6);

	A7 a7;
	A7 a7c(a7);

	A8 a8;
	A8 a8c(a8);

	return 1; // Compile-time tests
}

runall_result test_main()
{
	accelerator_view av = require_device(device_flags::NOT_SPECIFIED).get_default_view();

	runall_result result;
	result &= (GPU_INVOKE(av, int, test) == 1);
	return result;
}
