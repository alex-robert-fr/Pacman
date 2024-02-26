#include "player/player.h"
#include "raylib.h"
#include <stdlib.h>

int main(void) {
	/*---- INIT ----*/
	InitWindow(800, 450, "raylib [core] example - basic window");
	SetTargetFPS(60);

	/*---- PLAYER ----*/
	Vector2	*playerPosition = calloc(1, sizeof(Vector2));
	playerPosition->x = 50;
	playerPosition->y = 50;
	Player	*player = createPlayer(playerPosition, 10);

	while (!WindowShouldClose()) {
		playerPosition->x += player->speed;
		if (playerPosition->x > 800)
			playerPosition->x = 0;
		/*---- BEGIN DRAW ----*/
		BeginDrawing();
		ClearBackground(BLACK);
		drawPlayer(*player->position);
		EndDrawing();
		/*---- END DRAW ----*/
	}
	CloseWindow();
	return (0);
}
