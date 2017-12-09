/*
** EPITECH PROJECT,
** File Name : anim2.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void anim2(screen_t *sc)
{
	static sfVector2i pos = {0, 0};
	int size = 20;

	draw_sqrt(sc->buffer, pos, size, map(&sc->color_time));
	pos.x += size * sc->sec;
	if (pos.x + size > WIDTH) {
		pos.x = 0;
		pos.y += size * sc->sec;
	}
	if (pos.y + size > HEIGHT)
		pos.y = 0;
	if (sc->sec >= 25)
		sfClock_restart(sc->clock);
}
