/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

int main(int ac, char **av)
{
	screen_t sc;

	if (ac != 2) {
		put_bad_nb(ac);
		return (84);
	}
	if (check_args(av[1]) == -1)
		return (84);
	else if (check_args(av[1]) == 1)
		return (0);
	init_screen(&sc, av[1]);
	while (sfRenderWindow_isOpen(sc.window)) {
		event(&sc);
		update(&sc);
		draw(&sc);
	}
	destroy(&sc);
	return (0);
}
