#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.1/Time.h"
#include "../lab3.1/Time.cpp"
#include "../lab3.1/Triad.h"
#include "../lab3.1/Triad.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad tr1(1, 2, 3);
			int t = tr1.getHour();
			Assert::AreEqual(1, t);
		}
	};
}
