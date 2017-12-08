/*
** EPITECH PROJECT, 2017
** File Name : anim4.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void anim4(screen_t *sc)
{
	int radius = 200;
	circle_t circle = {radius, radius, radius};
	static int x_speed = 100;

	circle.x += sc->sec * x_speed;
	if (circle.x + radius >= WIDTH) {
		x_speed = -x_speed;
		circle.x = WIDTH - radius;
		sfClock_restart(sc->clock);
	}
	draw_circle(sc->buffer, circle, sfRed);
}
