#include <cmath>

template<typename T>
Vector<T>::Vector(T x, T y)
	: x(x), y(y)
{

}

template<typename T>
bool Vector<T>::operator==(const Vector<T>& other) const {
	return x == other.x && y == other.y;
}

template<typename T>
Vector<T> Vector<T>::operator+(const Vector<T>& other) const {
	return { x + other.x, y + other.y };
}

template<typename T>
Vector<T> Vector<T>::operator-() const {
	return { -x, -y };
}

template<typename T>
Vector<T> Vector<T>::operator-(const Vector<T>& other) const {
	return *this + -other;
}

template<typename T>
Vector<T> Vector<T>::operator*(T scalar) const {
	return { x * scalar, y * scalar };
}

template<typename T>
Vector<T> Vector<T>::operator/(T scalar) const {
	return { x / scalar, y / scalar };
}

template<typename T>
Vector<T> operator*(const T& scalar, const Vector<T>& vector) {
	return vector * scalar;
}

template<typename T>
T Vector<T>::abs() const {
	return sqrt(x * x + y * y);
}

template<typename T>
Vector<T>& Vector<T>::operator+=(const Vector<T>& other) {
	return *this = *this + other;
}

template<typename T>
Vector<T>& Vector<T>::operator-=(const Vector<T>& other) {
	return *this = *this - other;
}

template<typename T>
Vector<T>& Vector<T>::operator*=(T scalar) {
	return *this = *this * scalar;
}