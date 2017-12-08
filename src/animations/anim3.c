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
	int size = 20;
	static int last_sec = 0;

	my_put_square(sc->buffer, (int)sc->sec * size, (int)sc->sec / WIDTH, size, size, random_color());
	//sfClock_restart(sc->clock);
}
