#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_06_1_it/lab_06_1(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab061it
{
	TEST_CLASS(Lab061it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test;
			const int n = 23;
			int r[n];
			test = Sum(r, n);
			Assert::AreEqual(test, 0);

		}
	};
}
