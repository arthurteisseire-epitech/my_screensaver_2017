/*
** EPITECH PROJECT,
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
	int size = 20;

	my_put_square(sc->buffer, x, y, size, size, color);
	x += size * sc->sec;
	if (x + size > WIDTH) {
		x = 0;
		y += size * sc->sec;
	}
	if (y + size > HEIGHT)
		y = 0;
}
