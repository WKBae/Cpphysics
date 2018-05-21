#pragma once

template<typename T>
class Vector
{
public:
	Vector(T x, T y);

	T x, y;

	T abs() const;

	bool operator==(const Vector<T>& other) const;
	Vector<T> operator+(const Vector<T>& other) const;
	Vector<T> operator-() const;
	Vector<T> operator-(const Vector<T>& other) const;
	Vector<T> operator*(T scalar) const;
	Vector<T> operator/(T scalar) const;

	Vector<T>& operator+=(const Vector<T>& other);
	Vector<T>& operator-=(const Vector<T>& other);
	Vector<T>& operator*=(T scalar);
	Vector<T>& operator/=(T scalar);
};

template<typename T>
Vector<T> operator*(const T& scalar, const Vector<T>& vector);

#include "Vector.tpp"
