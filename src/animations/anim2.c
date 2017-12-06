/*
** EPITECH PROJECT, 2017
** File Name : anim2.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void anim2(screen_t *sc)
{
	static int x = 0;
	static int y = 0;
	int r = rand() % 255;
	int b = rand() % 255;
	int g = rand() % 255;
	sfColor color = {r, g, b, 255};

	my_put_square(sc->buffer, x, y, 20, 20, color);
	x += 20;
	if (x + 20 > WIDTH) {
		x = 0;
		y += 20;
	}
	if (y + 20 > HEIGHT)
		y = 0;
}
