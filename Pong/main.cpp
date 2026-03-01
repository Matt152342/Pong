#include "raylib.h"
#include "Paddle.h"
#include "Player.h"

#include <iostream>
#include <utility>

const int screenWidth = 800;
const int screenHeight = 500;

int main() {
	InitWindow(screenWidth, screenHeight, "Pong");
	SetTargetFPS(60);

	Color paddleColor = Color(255, 161, 0, 255);

	while (!WindowShouldClose()) {

		// Drawing
		BeginDrawing();

		ClearBackground({50, 50, 50, 255});

		EndDrawing();
	}

	CloseWindow();
	return 0;
}