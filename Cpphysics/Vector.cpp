#include "Vector.h"
#include <cmath>

Vector::Vector(int x, int y)
	: x(x), y(y)
{
	
}

bool Vector::operator==(const Vector& other) const {
	return x == other.x && y == other.y;
}

Vector Vector::operator+(const Vector& other) const {
	return { x + other.x, y + other.y };
}

Vector Vector::operator-() const {
	return { -x, -y };
}

Vector Vector::operator-(const Vector& other) const {
	return *this + -other;
}

Vector Vector::operator*(int scalar) const {
	return { x * scalar, y * scalar };
}

Vector Vector::operator/(int scalar) const {
	return { x / scalar, y / scalar };
}

Vector operator*(int scalar, const Vector& vector) {
	return vector * scalar;
}

int Vector::abs() const {
	return sqrt(x * x + y * y);
}

Vector& Vector::operator+=(const Vector& other) {
	return *this = *this + other;
}

Vector& Vector::operator-=(const Vector& other) {
	return *this = *this - other;
}

Vector& Vector::operator*=(int scalar) {
	return *this = *this * scalar;
}
