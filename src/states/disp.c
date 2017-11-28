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
	for (int i = 0; i < sc->animations[0]->nb_entities; i++)
		sfRenderWindow_drawSprite(sc->window, sc->animations[0]->entities[i]->sprite, NULL);
	sfRenderWindow_display(sc->window);
}
