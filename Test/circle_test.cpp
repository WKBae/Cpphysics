#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Cpphysics/Circle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(CircleTest)
{
public:
		
	TEST_METHOD(testCreation) {
		Circle* circle = new Circle(10);
		Assert::AreEqual(circle->radius, 10);
	}

};