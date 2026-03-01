#include "Paddle.h"
#include "raylib.h"
#include <utility>

// Setter function
void Paddle::setPaddle(int width, int height, Vector2 position) {
	this->paddleWidth = width;
	this->paddleHeight = height;
	this->paddlePos = position;

	this->paddleRect = { position.x, position.y, (float)width, (float)height };
}

// Getter functions
std::pair<int, int> Paddle::getPlayerWidth() {
	return { paddleWidth, paddleHeight };
}

Vector2 Paddle::getPlayerPos() {
	return paddlePos;
}

// Draw rectangle
void Paddle::drawPaddle(Color color) {
	DrawRectangleRec(paddleRect, color);
}