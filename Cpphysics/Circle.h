#pragma once

class Circle
{
public:
	Circle(int radius);

	void setMass(int newMass);
	void setPosition(int newX, int newY);
	void setVelocity(int newVelX, int newVelY);

	void applyVelocity();

	int x, y;
	int velocityX, velocityY;

	int radius;
	int mass;
};
