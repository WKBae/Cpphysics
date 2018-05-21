#include "Circle.h"

Circle::Circle(int radius)
	: position_(), velocity_(), radius_(radius), mass_()
{

}

int Circle::radius() const {
	return radius_;
}

void Circle::mass(int newMass) {
	this->mass_ = newMass;
}

int Circle::mass() const {
	return mass_;
}

void Circle::position(const Vector<int>& newPos) {
	position_ = newPos;
}

const Vector<int>& Circle::position() const {
	return position_;
}

void Circle::velocity(const Vector<int>& newVel) {
	velocity_ = newVel;
}

const Vector<int>& Circle::velocity() const {
	return velocity_;
}

void Circle::applyVelocity() {
	position_ += velocity_;
}

void Circle::applyForce(const Vector<int>& force) {
	velocity_ += force / mass_;
}
