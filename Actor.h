#pragma once
#include <Vector2D>

class AActor
{
public:
	AActor();
	~AActor(); //�Ҹ���

	char Shape;
	Vector2D Location;
	bool bCollide;

	void Draw();
};

