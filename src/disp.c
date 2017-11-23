/*
** EPITECH PROJECT, 2017
** File Name : disp.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

void disp(game_t *game, category_t *category)
{
	sfRenderWindow_clear(window, sfBlack);
	for (int i = 0; i < category->size; i++)
		sfRenderWindow_drawSprite(game->window, category->entities[i]->sprite, NULL);
	sfRenderWindow_display(game->window);
}
