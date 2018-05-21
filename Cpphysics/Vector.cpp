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
	return Vector(x + other.x, y + other.y);
}

Vector Vector::operator-() const {
	return Vector(-x, -y);
}

Vector Vector::operator-(const Vector& other) const {
	return *this + -other;
}

Vector Vector::operator*(int scalar) const {
	return Vector(x * scalar, y * scalar);
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
