#pragma once

class Vector
{
public:
	Vector(int x, int y);

	int x, y;

	int abs() const;

	bool operator==(const Vector& other) const;
	Vector operator+(const Vector& other) const;
	Vector operator-() const;
	Vector operator-(const Vector& other) const;
	Vector operator*(int scalar) const;
	Vector operator/(int scalar) const;

	Vector& operator+=(const Vector& other);
	Vector& operator-=(const Vector& other);
	Vector& operator*=(int scalar);
};

Vector operator*(int scalar, const Vector& vector);
