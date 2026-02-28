#include "raylib.h"

#include <iostream>
#include <string>

const int screenWidth = 800;
const int screenHeight = 500;

int main() {
	InitWindow(screenWidth, screenHeight, "Pong");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		// Update

		// Drawing
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}