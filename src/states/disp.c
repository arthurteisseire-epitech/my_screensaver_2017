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
	for (int i = 0; i < sc->nb_anim; i++)
		disp_entities(sc, i);
	sfRenderWindow_display(sc->window);
}

void disp_entities(screen_t *sc, int index_anim)
{
	for (int i = 0; i < sc->animations[index_anim]->nb_entities; i++)
		sfRenderWindow_drawSprite(sc->window, sc->animations[index_anim]->entities[i]->sprite, NULL);
}
