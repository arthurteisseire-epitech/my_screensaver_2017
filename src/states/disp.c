/*
** EPITECH PROJECT, 2017
** File Name : disp.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

void disp(game_t *game, animation_t *category)
{
	sfRenderWindow_clear(game->window, sfBlack);
	for (unsigned int i = 0; i < category->nb_entities; i++)
		sfRenderWindow_drawSprite(game->window, category->entities[i]->sprite, NULL);
	sfRenderWindow_display(game->window);
}
