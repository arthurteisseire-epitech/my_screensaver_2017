/*
** EPITECH PROJECT, 2017
** File Name : destroy.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void destroy(screen_t *sc)
{
	sfSprite_destroy(sc->sprite);
	sfTexture_destroy(sc->texture);
	sfClock_destroy(sc->clock);
	sfClock_destroy(sc->color_time.clock);
	sfRenderWindow_destroy(sc->window);
	free(sc->buffer);
}
