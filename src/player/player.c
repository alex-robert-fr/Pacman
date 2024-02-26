#include "player.h"
#include "raylib.h"

Player createPlayer(Vector2 position, int speed) {
	Player player = {
		.position = position,
		.speed = speed,
	};
	return (player);
}

void drawPlayer(Vector2 position) {
	DrawCircleV(position, 20, YELLOW);
}
