/*
** EPITECH PROJECT, 2017
** File Name : init_game.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

void init_game(game_t *game)
{
	game->mode->width = WIDTH;
	game->mode->height = HEIGHT;
	game->mode->bitsPerPixel = 32;
	create_window(game, "Title");
}

void create_window(game_t *game, char const *title)
{
	game->window = sfRenderWindow_create(*(game)->mode, title, sfResize | sfClose, NULL);
	if (!game->window)
		exit(84);
}
