#include "pch.h"
#include "CppUnitTest.h"
#include "../52/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double r=A(1,1,1);
			Assert::AreEqual(0, r, 0.001);
		}
	};
}
