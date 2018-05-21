#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Cpphysics/Vector.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(VectorTest)
{
public:

	TEST_METHOD(testCreation) {
		Vector<int> vector(5, 10);
		Assert::AreEqual(vector.x, 5);
		Assert::AreEqual(vector.y, 10);
	}

	TEST_METHOD(testEquality) {
		Vector<int> vec1(5, 10), vec2(5, 10);
		Assert::AreEqual(vec1, vec2);
	}

	TEST_METHOD(testFloatEquality) {
		Vector<float> vec1(0, 0), part(0.1, 0.2), vec2(1.0, 2.0);
		for (int i = 0; i < 10; i++)
			vec1 += part;
		Assert::AreEqual(vec2, vec1);
	}

	TEST_METHOD(testAddition) {
		Vector<int> vec1(1, 2), vec2(3, 4);
		Assert::AreEqual({ 1 + 3, 2 + 4 }, vec1 + vec2);
	}

	TEST_METHOD(testNegate) {
		Vector<int> vec(1, 2);
		Assert::AreEqual({ -1, -2 }, -vec);
	}

	TEST_METHOD(testSubtraction) {
		Vector<int> vec1(10, 8), vec2(1, 2);
		Assert::AreEqual({ 10 - 1, 8 - 2 }, vec1 - vec2);
	}

	TEST_METHOD(testScalarProduction) {
		Vector<int> vec(1, 2);
		Assert::AreEqual({ 2, 4 }, vec * 2);
		Assert::AreEqual({ 3, 6 }, 3 * vec);
	}

	TEST_METHOD(testScalarDivision) {
		Vector<int> vec(2, 4);
		Assert::AreEqual({ 1, 2 }, vec / 2);
	}

	TEST_METHOD(testAbs) {
		Vector<int> vec(3, 4);
		Assert::AreEqual(5, vec.abs());
	}

	TEST_METHOD(testAssign) {
		Vector<int> vec(1, 2);
		vec = { 3, 4 };
		Assert::AreEqual({ 3, 4 }, vec);
	}

	TEST_METHOD(testAddAssign) {
		Vector<int> vec(1, 2);
		vec += { 3, 4 };
		Assert::AreEqual({ 4, 6 }, vec);
	}
	TEST_METHOD(testSubAssign) {
		Vector<int> vec(5, 6);
		vec -= { 2, 1 };
		Assert::AreEqual({ 3, 5 }, vec);
	}
	TEST_METHOD(testScalarMulAssign) {
		Vector<int> vec(7, 8);
		vec *= 5;
		Assert::AreEqual({ 7 * 5, 8 * 5 }, vec);
	}

};
