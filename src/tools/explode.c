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
	c.radius = 10;
	for (int x = c.radius; x + c.radius < WIDTH; x += rand() % 80 + c.radius * 3)
		for (int y = c.radius; y + c.radius < HEIGHT; y += rand() % 80 + c.radius * 3) {
			c.pos.x = x;
			c.pos.y = y;
			draw_circle(sc->buffer, &c, random_color());
		}
}
