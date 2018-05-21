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
		Assert::AreEqual(circle->radius(), 10);
	}

	TEST_METHOD(testMass) {
		circle->mass(5);
		Assert::AreEqual(circle->mass(), 5);
	}

	TEST_METHOD(testInitialPosition) {
		Assert::AreEqual({ 0, 0 }, circle->position());
	}

	TEST_METHOD(testInitialVelocity) {
		Assert::AreEqual({ 0, 0 }, circle->velocity());
	}

	TEST_METHOD(testSetPosition) {
		circle->position({ 2, 3 });
		Assert::AreEqual({ 2, 3 }, circle->position());
	}

	TEST_METHOD(testSetVelocity) {
		circle->velocity({ 5, 8 });
		Assert::AreEqual({ 5, 8 }, circle->velocity());
	}

	TEST_METHOD(testApplyVelocity) {
		circle->position({ 5, 10 });
		circle->velocity({ 1, 2 });
		circle->applyVelocity();
		Assert::AreEqual({ 5 + 1, 10 + 2 }, circle->position());
		Assert::AreEqual({ 1, 2 }, circle->velocity());
	}

	TEST_METHOD(testApplyForce) {
		circle->velocity({ 1, 2 });
		circle->mass(5);
		circle->applyForce({ 5, 10 });
		Assert::AreEqual({ 1 + 5 / 5, 2 + 10 / 5 }, circle->velocity());
	}
};
