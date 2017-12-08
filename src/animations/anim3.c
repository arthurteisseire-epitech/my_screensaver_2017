/*
** EPITECH PROJECT, 2017
** File Name : anim3.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"
#include "my.h"

void anim3(screen_t *sc)
{
	int speed = 200;
	int size = 100;
	int x = 0;
	int y = HEIGHT / 2;

	x += sc->sec * speed;
	if (x + size > WIDTH) {
		x = 0;
		sfClock_restart(sc->clock);
	}
	my_put_square(sc->buffer, x, y, size, size, sfRed);
}
