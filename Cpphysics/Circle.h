#pragma once

#include "Vector.h"

class Circle
{
public:
	explicit Circle(int radius);

	void setMass(int newMass);
	void setPosition(Vector newPos);
	void setVelocity(Vector newVel);

	void applyVelocity();

	Vector position;
	Vector velocity;

	int radius;
	int mass;
};
