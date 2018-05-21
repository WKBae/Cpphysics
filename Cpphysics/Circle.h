#pragma once

#include "Vector.h"

class Circle
{
public:
	explicit Circle(int radius);

	int radius() const;

	int mass() const;
	void mass(int newMass);

	const Vector<int>& position() const;
	void position(const Vector<int>& newPos);

	const Vector<int>& velocity() const;
	void velocity(const Vector<int>& newVel);

	void applyForce(const Vector<int>& force);

	void applyVelocity();

private:
	Vector<int> position_;
	Vector<int> velocity_;

	int radius_;
	int mass_;
};
