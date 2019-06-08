#include "GameManager.h"
#include <random>


GameManager::GameManager() {

}

bool GameManager::update() {
	hole[getNextNumber()].appearMole();
	return false;
}

int GameManager::getNextNumber() {
	return rand() % 9 + 1;
}
