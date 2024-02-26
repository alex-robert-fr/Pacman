#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"

typedef struct Player {
	Vector2 *position;
	int			speed;
} Player;

Player*	createPlayer(Vector2 *position, int speed);
void		drawPlayer(Vector2 position);

#endif
