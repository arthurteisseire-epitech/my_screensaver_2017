/*
** EPITECH PROJECT, 2017
** File Name : init_game.c
** File description:
** By Arthur Teisseire
*/

#include "struct.h"

void init_game(Game_t *game)
{
	char const *title = "Titre";

	game->mode = {WIDTH, HEIGHT, 32};
	game->window = create_window(game, title);
}

void create_window(Game_t *game, char const *title)
{
	game->window = sfRenderWindow_create(game->mode, title, sfResize | sfClose, NULL);
	if (!game->window)
		exit(84);
}
