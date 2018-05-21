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

	TEST_METHOD(testMass) {
		Circle* circle = new Circle(10);
		circle->setMass(5);
		Assert::AreEqual(circle->mass, 5);
	}

};