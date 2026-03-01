#ifndef PADDLE_H
#define PADDLE_H

#include "raylib.h"
#include <utility>

class Paddle {
private:
	int paddleWidth = 0, paddleHeight = 0;
	Vector2 paddlePos = { 0.0f, 0.0f };
	Rectangle paddleRect = { paddlePos.x, paddlePos.y, (float)paddleWidth, (float)paddleHeight };

public:
	// Setter function
	void setPaddle(int width, int height, Vector2 position);

	// Getter functions
	std::pair<int, int> getPlayerWidth();

	Vector2 getPlayerPos();

	// Draw rectangle
	void drawPaddle(Color color);
};
#endif