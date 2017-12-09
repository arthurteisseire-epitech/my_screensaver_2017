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
	int size = 20;

	my_put_square(sc->buffer, x, y, size, size, map(&sc->color_time));
	x += size * sc->sec;
	if (x + size > WIDTH) {
		x = 0;
		y += size * sc->sec;
	}
	if (y + size > HEIGHT)
		y = 0;
	if (sc->sec >= 25)
		sfClock_restart(sc->clock);
}
