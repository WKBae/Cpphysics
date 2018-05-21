#include <cmath>

template<typename T>
Vector<T>::Vector()
	: x(), y()
{

}

template<typename T>
Vector<T>::Vector(T x, T y)
	: x(x), y(y)
{

}

template<typename T>
bool Vector<T>::operator==(const Vector<T>& other) const {
	return x == other.x && y == other.y;
}

template<>
inline bool Vector<double>::operator==(const Vector<double>& other) const {
	static const double EPSILON = 1e-5;
	double xDiff = x - other.x;
	double yDiff = y - other.y;
	return (-EPSILON < xDiff && xDiff < EPSILON) && (-EPSILON < yDiff && yDiff < EPSILON);
}

template<>
inline bool Vector<float>::operator==(const Vector<float>& other) const {
	static const float EPSILON = 1e-5f;
	float xDiff = x - other.x;
	float yDiff = y - other.y;
	return (-EPSILON < xDiff && xDiff < EPSILON) && (-EPSILON < yDiff && yDiff < EPSILON);
}

template<typename T>
Vector<T> Vector<T>::operator-() const {
	return { -x, -y };
}

template<typename T>
T Vector<T>::abs() const {
	return sqrt(x * x + y * y);
}

template<typename T>
Vector<T>& Vector<T>::operator+=(const Vector<T>& other) {
	x += other.x;
	y += other.y;
	return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator-=(const Vector<T>& other) {
	*this += -other;
	return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator*=(T scalar) {
	x *= scalar;
	y *= scalar;
	return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator/=(T scalar) {
	x /= scalar;
	y /= scalar;
	return *this;
}
