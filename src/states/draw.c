/*
** EPITECH PROJECT, 2017
** File Name : disp.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void draw(screen_t *sc)
{
	sfRenderWindow_clear(sc->window, sfBlack);
	//clear_buffer(sc->buffer);
	sfRenderWindow_drawSprite(sc->window, sc->sprite, NULL);
	sfRenderWindow_display(sc->window);
}
