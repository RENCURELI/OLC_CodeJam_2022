#pragma once
#include "vector2.h"

class Entity
{
public: 
	Entity(float xPos, float yPos)
	{
		pos.X = xPos;
		pos.Y = yPos;
	}

	vector2 GetPos() { return pos; }
	
private:
	vector2 pos;


};

