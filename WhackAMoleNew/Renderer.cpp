#include "Renderer.h"
#include <Siv3D.hpp>



Renderer::Renderer(){

}

void Renderer::render(Texture texture, Vec2 position) {
	texture.drawAt(position);
}