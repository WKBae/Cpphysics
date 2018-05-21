#include "Circle.h"

Circle::Circle(int radius)
	: position(0, 0), velocity(0, 0), radius(radius), mass()
{

}

void Circle::setMass(int newMass) {
	this->mass = newMass;
}

void Circle::setPosition(Vector newPos) {
	position = newPos;
}

void Circle::setVelocity(Vector newVel) {
	velocity = newVel;
}

void Circle::applyVelocity() {
	position += velocity;
}

void Circle::applyForce(Vector force) {
	velocity += force / mass;
}
