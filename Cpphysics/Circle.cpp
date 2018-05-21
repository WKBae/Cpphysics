#include "Circle.h"

Circle::Circle(int radius)
	: x(), y(), radius(radius), mass()
{

}

void Circle::setMass(int newMass) {
	this->mass = newMass;
}

void Circle::setPosition(int newX, int newY) {
	x = newX;
	y = newY;
}

void Circle::setVelocity(int newVelX, int newVelY) {
	velocityX = newVelX;
	velocityY = newVelY;
}

void Circle::applyVelocity() {
	x += velocityX;
	y += velocityY;
}

