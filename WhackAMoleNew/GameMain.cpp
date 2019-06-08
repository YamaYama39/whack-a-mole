#include "GameMain.h"
#include "Renderer.h"
#include "GameManager.h"
#include <Siv3D.hpp>
#include <random>


GameMain::GameMain() {
	if (!init()) {
		//error
	}
}

bool GameMain::init() {
	return true;
}

void GameMain::execute() {
	const Font font(30);
	const GameManager gameManager;
	int count = 0;
		while (System::Update()){
			count++;
			if (count % 10 == 0) {
				font().drawAt(Window::Center(), Palette::Black);
				gameManager.update();
			}
		}
	finish();
}

void GameMain::finish() {

}