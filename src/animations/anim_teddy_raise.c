/*
** EPITECH PROJECT, 2017
** File Name : anim4.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

static teddy_t teddy;

void anim4(screen_t *sc)
{
	static int way = -1;
	static int size = 300;
	int speed = 15;
	int x = WIDTH / 2;
	int y;

	size += sc->sec * speed * way;
	y = HEIGHT / 2 + size / 2;
	if (size >= 300 || size <= -300) {
		way *= -1;
		sfClock_restart(sc->clock);
	}
	init_sizes(&teddy, size);
	set_pos(&teddy, x, y);
	set_circles(&teddy);
	draw_teddy(sc, &teddy);
}
