#pragma once

#include "Vector.h"

class Circle
{
public:
	explicit Circle(int radius);

	void setMass(int newMass);
	void setPosition(Vector<int> newPos);
	void setVelocity(Vector<int> newVel);
	void applyForce(Vector<int> force);

	void applyVelocity();

	Vector<int> position;
	Vector<int> velocity;

	int radius;
	int mass;
};
