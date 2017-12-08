/*
** EPITECH PROJECT, 2017
** File Name : anim1.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void anim1(screen_t *sc)
{
	static double x = 0;
	static double y = 0;
	int size = 15;

	while (y + size < HEIGHT) {
		my_put_square(sc->buffer, x, y, size, size, random_color());
		x += size;
		if (x + size >= WIDTH) {
			y += size;
			x = 0;
		}
	}
	x = 0;
	y = 0;
}
