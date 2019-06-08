#include "Hole.h"
#include "Renderer.h"
#include <random>

Hole::Hole(int id) {
	this->id = id;
}

void Hole::appearMole() {
	Texture mogura_normal(Emoji(U"/resource/mogura.png"));
	Renderer renderer;
	renderer.render(mogura_normal, Vec2(100, 200));
}
