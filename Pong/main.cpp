#include "raylib.h"
#include "Paddle.h"

#include <iostream>
#include <utility>

const int screenWidth = 800;
const int screenHeight = 500;

int main() {
	InitWindow(screenWidth, screenHeight, "Pong");
	SetTargetFPS(60);

	Color paddleColor = Color(255, 161, 0, 255);

	// Creating player object
	Paddle player;
	int playerWidth = 20, playerHeight = 70;
	Vector2 playerPosition = { 20.0f, 20.0f };
	float playerSpeed = 500.0f;
	player.setPaddle(playerWidth, playerHeight, playerPosition, playerSpeed);

	// Game Loop
	while (!WindowShouldClose()) {
		// Update
		float deltaTime = GetFrameTime();
		player.playerMovement(deltaTime);

		// Drawing
		BeginDrawing();

		ClearBackground({40, 40, 40, 255});
		player.drawPaddle(paddleColor);

		EndDrawing();
	}

	CloseWindow();
	return 0;
}