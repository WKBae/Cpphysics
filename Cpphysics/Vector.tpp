#include <cmath>

template<typename T>
Vector<T>::Vector()
	: x_(), y_()
{

}

template<typename T>
Vector<T>::Vector(T x, T y)
	: x_(x), y_(y)
{

}

template<typename T>
T Vector<T>::x() const {
	return x_;
}

template<typename T>
T Vector<T>::y() const {
	return y_;
}

template<typename T>
bool Vector<T>::operator==(const Vector<T>& other) const {
	return x_ == other.x_ && y_ == other.y_;
}

template<>
inline bool Vector<double>::operator==(const Vector<double>& other) const {
	static const double EPSILON = 1e-5;
	double xDiff = x_ - other.x_;
	double yDiff = y_ - other.y_;
	return (-EPSILON < xDiff && xDiff < EPSILON) && (-EPSILON < yDiff && yDiff < EPSILON);
}

template<>
inline bool Vector<float>::operator==(const Vector<float>& other) const {
	static const float EPSILON = 1e-5f;
	float xDiff = x_ - other.x_;
	float yDiff = y_ - other.y_;
	return (-EPSILON < xDiff && xDiff < EPSILON) && (-EPSILON < yDiff && yDiff < EPSILON);
}

template<typename T>
Vector<T> Vector<T>::operator-() const {
	return { -x_, -y_ };
}

template<typename T>
T Vector<T>::abs() const {
	return sqrt(x_ * x_ + y_ * y_);
}

template<typename T>
Vector<T>& Vector<T>::operator+=(const Vector<T>& other) {
	x_ += other.x_;
	y_ += other.y_;
	return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator-=(const Vector<T>& other) {
	*this += -other;
	return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator*=(T scalar) {
	x_ *= scalar;
	y_ *= scalar;
	return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator/=(T scalar) {
	x_ /= scalar;
	y_ /= scalar;
	return *this;
}
