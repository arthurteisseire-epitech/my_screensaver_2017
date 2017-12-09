/*
** EPITECH PROJECT, 2017
** File Name : explode.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

static circle_t c;

void explode(screen_t *sc)
{
	int y;
	int x;

	c.radius = 10;
	x = c.radius;
	while (x + c.radius < WIDTH) {
		y = c.radius;
		while (y + c.radius < HEIGHT) {
			c.pos.x = x;
			c.pos.y = y;
			draw_circle(sc->buffer, &c, random_color());
			y += rand() % 80 + c.radius * 3;
		}
		x += rand() % 80 + c.radius * 3;
	}
}
