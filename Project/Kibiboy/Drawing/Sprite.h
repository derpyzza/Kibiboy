#pragma once

// Includes
#include <SDL2/SDL.h>
#include <array>


class Sprite {
public:
	std::array<Uint16, 16> pixelRows = {};
	Sprite();
	Sprite(std::array<Uint16, 16> pixels);
	bool getPixel(Uint8 x, Uint8 y);
	void setPixel(bool pixel, Uint8 x, Uint8 y);
};
