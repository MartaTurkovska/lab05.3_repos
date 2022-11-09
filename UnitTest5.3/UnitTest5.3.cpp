#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = h(0);
			Assert::AreEqual(a, 1.);
		}
	};
}
