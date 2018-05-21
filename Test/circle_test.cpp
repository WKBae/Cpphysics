#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Cpphysics/Circle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(CircleTest)
{
public:
	Circle* circle;
	TEST_METHOD_INITIALIZE(initCircle) {
		circle = new Circle(10);
	}
	TEST_METHOD_CLEANUP(cleanCircle) {
		delete circle;
	}

	TEST_METHOD(testCreation) {
		Assert::AreEqual(circle->radius, 10);
	}

	TEST_METHOD(testMass) {
		circle->setMass(5);
		Assert::AreEqual(circle->mass, 5);
	}

	TEST_METHOD(testInitialPosition) {
		Assert::AreEqual(circle->x, 0);
		Assert::AreEqual(circle->y, 0);
	}

	TEST_METHOD(testSetPosition) {
		circle->setPosition(2, 3);
		Assert::AreEqual(circle->x, 2);
		Assert::AreEqual(circle->y, 3);
	}

	TEST_METHOD(testVelocity) {
		circle->setVelocity(5, 8);
		Assert::AreEqual(circle->velocityX, 5);
		Assert::AreEqual(circle->velocityY, 8);
	}
};