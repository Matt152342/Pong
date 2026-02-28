#include "raylib.h"
#include "Paddle.h"

#include <iostream>
#include <string>
#include <utility>

const int screenWidth = 800;
const int screenHeight = 500;

int main() {
	InitWindow(screenWidth, screenHeight, "Pong");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		// Update

		// Drawing
		BeginDrawing();
		ClearBackground({50, 50, 50, 255});
		EndDrawing();
	}

	CloseWindow();
	return 0;
}