#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_05_3/AP_Lab_05_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab053
{
	TEST_CLASS(Lab053)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(3);
			Assert::AreEqual(t, 7.279460,0.0001);
		}
	};
}
