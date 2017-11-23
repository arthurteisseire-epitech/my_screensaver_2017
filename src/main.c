/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

int main(void)
{
	game_t *game = malloc(sizeof(game_t));
	category_t *squares = malloc(sizeof(category_t));

	init_game(game);
	init_category(squares, game->buffer);
	while (sfRenderWindow_isOpen(game->window)) {
		event(game);
		update(squares, game->buffer);
		disp(game, squares);
	}
	return (0);
}
