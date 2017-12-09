/*
** EPITECH PROJECT, 2017
** File Name : anim1.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void anim1(screen_t *sc)
{
	static sfVector2i pos = {0, 0};
	int size = 15;

	while (pos.y + size < HEIGHT) {
		draw_sqrt(sc->buffer, pos, size, random_grey_color());
		pos.x += size;
		if (pos.x + size >= WIDTH) {
			pos.y += size;
			pos.x = 0;
		}
	}
	pos.x = 0;
	pos.y = 0;
}
