#include "player/player.h"
#include "raylib.h"

int main(void) {
	InitWindow(800, 450, "raylib [core] example - basic window");

	/*---- PLAYER ----*/
	Player player = createPlayer((Vector2){50,50}, 10);

	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(BLACK);
			drawPlayer(player.position);
		EndDrawing();
	}
	CloseWindow();
	return (0);
}
