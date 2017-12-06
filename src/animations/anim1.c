/*
** EPITECH PROJECT, 2017
** File Name : anim1.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void anim1(screen_t *sc)
{
	static int x = 0;
	static int y = 0;

	my_put_square(sc->buffer, x, y, 200, 200, sfRed);
	sfTexture_updateFromPixels(sc->texture, sc->buffer->pixels, WIDTH, HEIGHT, 0, 0);
	x++;
	y++;
	if (x + 200 > WIDTH)
		x = 0;
	if (y + 200 > HEIGHT)
		y = 0;
}

void anim2(screen_t *sc)
{
	my_put_square(sc->buffer, 200, 200, 200, 200, sfBlue);
	sfTexture_updateFromPixels(sc->texture, sc->buffer->pixels, WIDTH, HEIGHT, 0, 0);
}
