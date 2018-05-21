#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Cpphysics/Vector.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(VectorTest)
{
public:

	TEST_METHOD(testCreation) {
		Vector vector(5, 10);
		Assert::AreEqual(vector.x, 5);
		Assert::AreEqual(vector.y, 10);
	}

	TEST_METHOD(testEquality) {
		Vector vec1(5, 10), vec2(5, 10);
		Assert::AreEqual(vec1, vec2);
	}

	TEST_METHOD(testAddition) {
		Vector vec1(1, 2), vec2(3, 4);
		Assert::AreEqual(Vector(1 + 3, 2 + 4), vec1 + vec2);
	}

	TEST_METHOD(testNegate) {
		Vector vec(1, 2);
		Assert::AreEqual(Vector(-1, -2), -vec);
	}

	TEST_METHOD(testSubtraction) {
		Vector vec1(10, 8), vec2(1, 2);
		Assert::AreEqual(Vector(10 - 1, 8 - 2), vec1 - vec2);
	}

	TEST_METHOD(testScalarProduction) {
		Vector vec(1, 2);
		Assert::AreEqual(Vector(2, 4), vec * 2);
		Assert::AreEqual(Vector(3, 6), 3 * vec);
	}

	TEST_METHOD(testAbs) {
		Vector vec(3, 4);
		Assert::AreEqual(5, vec.abs());
	}
};

namespace Microsoft {
	namespace VisualStudio {
		namespace CppUnitTestFramework {
			template<>
			static std::wstring ToString<Vector>(const Vector& vec) {
				std::wostringstream w;
				w << L"Vector(" << vec.x << L", " << vec.y << L")";
				return w.str();
			}
		}
	}
}