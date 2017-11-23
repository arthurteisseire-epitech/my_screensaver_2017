/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

int main(void)
{
	game_t *game;
	category_t *squares;

	init_game(game);
	init_category(squares);
	while (sfRenderWindow_isOpen(game)) {
		event(game);
		update(squares);
		disp(game, squares);
	}
	return (0);
}
