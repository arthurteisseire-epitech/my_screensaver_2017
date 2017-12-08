/*
** EPITECH PROJECT, 2017
** File Name : anim4.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void anim4(screen_t *sc)
{
	int x_speed = 200;
	int radius = 100;
	circle_t circle1 = {radius, radius, radius};

	circle1.y += sc->sec * x_speed;
	if (circle1.y + radius >= HEIGHT) {
		circle1.y = radius;
		sfClock_restart(sc->clock);
	}
	draw_circle(sc->buffer, circle1, sfRed);
}
