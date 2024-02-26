#include "player.h"
#include "raylib.h"
#include <stdlib.h>

Player	*createPlayer(Vector2 *position, int speed) {
	Player	*player = calloc(1, sizeof(Player));
	player->position = position;
	player->speed = speed;
	return (player);
}

void drawPlayer(Vector2 position) {
	DrawCircleV(position, 20, YELLOW);
}
