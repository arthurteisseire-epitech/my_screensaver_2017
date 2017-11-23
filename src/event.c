/*
** EPITECH PROJECT, 2017
** File Name : event.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

void event(game_t *game)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(game->window, &event))
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(game->window);
}
