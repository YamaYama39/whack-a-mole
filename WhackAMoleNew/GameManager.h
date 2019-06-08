#pragma once
#include "Hole.h"

class GameManager {
public:
	Hole hole[9];

	GameManager();
	bool update();
	int getNextNumber();
};