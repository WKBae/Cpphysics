#include "Circle.h"

Circle::Circle(int radius)
	: radius(radius), mass()
{

}

void Circle::setMass(int newMass) {
	this->mass = newMass;
}