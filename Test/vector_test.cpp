#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Cpphysics/Vector.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(VectorTest)
{
	static constexpr double EPSILON = 1e-5;

public:

	TEST_METHOD(testCreation) {
		Vector<double> vector(5.0, 10.0);
		Assert::AreEqual(5.0, vector.x, EPSILON);
		Assert::AreEqual(10.0, vector.y, EPSILON);
	}

	TEST_METHOD(testEquality) {
		Vector<double> vec1(5.0, 10.0), vec2(5.0, 10.0);
		Assert::AreEqual(vec2, vec1);
	}

	TEST_METHOD(testFloatEquality) {
		Vector<double> vec1(0.0, 0.0), part(0.1, 0.2), vec2(1.0, 2.0);
		for (int i = 0; i < 10; i++)
			vec1 += part;
		Assert::AreEqual(vec2, vec1);
	}

	TEST_METHOD(testAddition) {
		Vector<double> vec1(1.0, 2.0), vec2(3.0, 4.0);
		Assert::AreEqual({ 1.0 + 3.0, 2.0 + 4.0 }, vec1 + vec2);
	}

	TEST_METHOD(testNegate) {
		Vector<double> vec(1.0, 2.0);
		Assert::AreEqual({ -1.0, -2.0 }, -vec);
	}

	TEST_METHOD(testSubtraction) {
		Vector<double> vec1(10.0, 8.0), vec2(1.0, 2.0);
		Assert::AreEqual({ 10.0 - 1.0, 8.0 - 2.0 }, vec1 - vec2);
	}

	TEST_METHOD(testScalarProduction) {
		Vector<double> vec(1.0, 2.0);
		Assert::AreEqual({ 2.0, 4.0 }, vec * 2.0);
		Assert::AreEqual({ 3.0, 6.0 }, 3.0 * vec);
	}

	TEST_METHOD(testScalarDivision) {
		Vector<double> vec(2.0, 4.0);
		Assert::AreEqual({ 1.0, 2.0 }, vec / 2.0);
	}

	TEST_METHOD(testAbs) {
		Vector<double> vec(3.0, 4.0);
		Assert::AreEqual(5.0, vec.abs(), EPSILON);
	}

	TEST_METHOD(testAssign) {
		Vector<double> vec(1.0, 2.0);
		vec = { 3.0, 4.0 };
		Assert::AreEqual({ 3.0, 4.0 }, vec);
	}

	TEST_METHOD(testAddAssign) {
		Vector<double> vec(1.0, 2.0);
		vec += { 3.0, 4.0 };
		Assert::AreEqual({ 4.0, 6.0 }, vec);
	}
	TEST_METHOD(testSubAssign) {
		Vector<double> vec(5.0, 6.0);
		vec -= { 2.0, 1.0 };
		Assert::AreEqual({ 3.0, 5.0 }, vec);
	}
	TEST_METHOD(testScalarMulAssign) {
		Vector<double> vec(7.0, 8.0);
		vec *= 5.0;
		Assert::AreEqual({ 7.0 * 5.0, 8.0 * 5.0 }, vec);
	}

};
