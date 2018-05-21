#pragma once

template<typename T>
class Vector
{
public:
	Vector();
	Vector(T x, T y);

	T x, y;

	T abs() const;

	bool operator==(const Vector<T>& other) const;
	Vector<T> operator-() const;

	Vector<T>& operator+=(const Vector<T>& other);
	Vector<T>& operator-=(const Vector<T>& other);
	Vector<T>& operator*=(T scalar);
	Vector<T>& operator/=(T scalar);

	friend Vector<T> operator+(Vector<T> lhs, const Vector<T>& rhs) {
		lhs += rhs;
		return lhs;
	}
	friend Vector<T> operator-(Vector<T> lhs, const Vector<T>& rhs) {
		lhs -= rhs;
		return lhs;
	}
	friend Vector<T> operator*(Vector<T> lhs, const T& rhs) {
		lhs *= rhs;
		return lhs;
	}
	friend Vector<T> operator*(const T& lhs, Vector<T> rhs) {
		return rhs * lhs; // reverse order
	}
	friend Vector<T> operator/(Vector<T> lhs, const T& rhs) {
		lhs /= rhs;
		return lhs;
	}
};

#include "Vector.tpp"
