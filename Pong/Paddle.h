#include "raylib.h"
#include <utility>

class Paddle {
private:
	int playerWidth = 0, playerHeight = 0;
	Vector2 playerPos = { 0.0f, 0.0f };
	Rectangle paddleRect = { playerPos.x, playerPos.y, (float)playerWidth, (float)playerHeight };

public:
	// Setter function
	void setPaddle(int width, int height, Vector2 position, Color color) {
		this->playerWidth = width;
		this->playerHeight = height;
		this->playerPos = position;

		this->paddleRect = { position.x, position.y, (float)width, (float)height };
	}

	// Getter functions
	std::pair<int, int> getPlayerWidth() {
		return {playerWidth, playerHeight};
	}

	Vector2 getPlayerPos() {
		return playerPos;
	}

	// Draw rectangle
	void drawPaddle(Color color) {
		DrawRectangleRec(paddleRect, color);
	}
};