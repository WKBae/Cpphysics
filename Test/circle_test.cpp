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

	TEST_METHOD(testInitialPosition) {
		Circle* circle = new Circle(10);
		Assert::AreEqual(circle->x, 0);
		Assert::AreEqual(circle->y, 0);
	}

	TEST_METHOD(testSetPosition) {
		Circle* circle = new Circle(10);
		circle->setPosition(2, 3);
		Assert::AreEqual(circle->x, 2);
		Assert::AreEqual(circle->y, 3);
	}

	TEST_METHOD(testVelocity) {
		Circle* circle = new Circle(10);
		circle->setVelocity(5, 8);
		Assert::AreEqual(circle->velocityX, 5);
		Assert::AreEqual(circle->velocityY, 8);
	}
};