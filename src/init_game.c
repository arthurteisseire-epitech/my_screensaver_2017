/*
** EPITECH PROJECT, 2017
** File Name : init_game.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

void init_game(game_t *game)
{
	game->window = create_window();
}

sfRenderWindow *create_window()
{
	sfVideoMode mode = {WIDTH, HEIGHT, 32};
	sfRenderWindow *window;

	window = sfRenderWindow_create(mode, "Le Titre", sfResize | sfClose, NULL);
	if (!window)
		exit(84);
	return (window);
}
