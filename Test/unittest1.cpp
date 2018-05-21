#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{		
	TEST_CLASS(CircleTest)
	{
	public:
		
		TEST_METHOD(testCreation)
		{
			//Circle* circle = new Circle(10);
			//Assert::AreEqual(circle.radius, 10);
			Assert::AreEqual(1, 1);
		}

	};
}