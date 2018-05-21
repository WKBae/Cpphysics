#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Cpphysics/Circle.h"
#include "../Cpphysics/Vector.h"

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
		Assert::AreEqual(Vector(0, 0), circle->position);
	}

	TEST_METHOD(testInitialVelocity) {
		Assert::AreEqual(Vector(0, 0), circle->velocity);
	}

	TEST_METHOD(testSetPosition) {
		circle->setPosition(Vector(2, 3));
		Assert::AreEqual(Vector(2, 3), circle->position);
	}

	TEST_METHOD(testSetVelocity) {
		circle->setVelocity(Vector(5, 8));
		Assert::AreEqual(Vector(5, 8), circle->velocity);
	}

	TEST_METHOD(testApplyVelocity) {
		circle->setPosition(Vector(5, 10));
		circle->setVelocity(Vector(1, 2));
		circle->applyVelocity();
		Assert::AreEqual(Vector(5 + 1, 10 + 2), circle->position);
		Assert::AreEqual(Vector(0, 0), circle->velocity);
	}

};
