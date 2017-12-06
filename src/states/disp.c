/*
** EPITECH PROJECT, 2017
** File Name : disp.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void disp(screen_t *sc)
{
	sfRenderWindow_clear(sc->window, sfBlack);
	sfRenderWindow_drawSprite(sc->window, sc->sprite, NULL);
	sfRenderWindow_display(sc->window);
}
