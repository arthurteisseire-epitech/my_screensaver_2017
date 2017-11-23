/*
** EPITECH PROJECT, 2017
** File Name : event.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

void event(game_t *game)
{
	/* Process events */
	while (sfRenderWindow_pollEvent(game->window, game->event))
	{
		/* Close window : exit */
		if (game->event->type == sfEvtClosed)
			sfRenderWindow_close(game->window);
	}
}
