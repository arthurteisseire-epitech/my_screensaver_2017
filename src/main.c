/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

int main(void)
{
	screen_t sc;

	init_screen(&sc);
	init_textures(&sc);
	init_animations(&sc);
	while (sfRenderWindow_isOpen(sc.window)) {
		event(&sc);
		update(&sc);
		disp(&sc);
	}
	//destroy(sc);
	return (0);
}
