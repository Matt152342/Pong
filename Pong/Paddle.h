#include "raylib.h"
#include <utility>

class Paddle {
private:
	int playerWidth = 0, playerHeight = 0;
	Vector2 playerPos = { 0.0f, 0.0f };
	Rectangle paddleRect = { playerPos.x, playerPos.y, playerWidth, playerHeight };
	Color paddleColor = { 0, 0, 0, 255 };

public:
	// Setter function
	void setPaddle(int width, int height, Vector2 position, Color color) {
		playerWidth = width;
		playerHeight = height;
		playerPos = position;
		paddleColor = color;
	}

	// Getter functions
	std::pair<int, int> getPlayerWidth() {
		return {playerWidth, playerHeight};
	}

	Vector2 getPlayerPos() {
		return playerPos;
	}

	// Draw rectangle
	void drawPaddle() {
		DrawRectangleRec(paddleRect, paddleColor);
	}
};