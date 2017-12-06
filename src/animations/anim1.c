/*
** EPITECH PROJECT, 2017
** File Name : anim1.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void anim1(screen_t *sc)
{
	my_put_square(sc->buffer, 0, 0, 200, 200, sfRed);
	sfTexture_updateFromPixels(sc->texture, sc->buffer->pixels, WIDTH, HEIGHT, 0, 0);
}

void anim2(screen_t *sc)
{
	my_put_square(sc->buffer, 200, 200, 200, 200, sfBlue);
	sfTexture_updateFromPixels(sc->texture, sc->buffer->pixels, WIDTH, HEIGHT, 0, 0);
}
