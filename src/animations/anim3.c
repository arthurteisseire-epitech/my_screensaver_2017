/*
** EPITECH PROJECT, 2017
** File Name : anim3.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"
#include "my.h"


static void draw_it(screen_t *sc, int *x, int *y, int size)
{
	my_put_square(sc->buffer, x[0], y[0], size, map(&sc->color_time));
	my_put_square(sc->buffer, x[1], y[1], size, map(&sc->color_time));
	my_put_square(sc->buffer, x[0], y[2], size, map(&sc->color_time));
	my_put_square(sc->buffer, x[1], y[3], size, map(&sc->color_time));
}

void anim3(screen_t *sc)
{
	static int speed = 200;
	int size = 100;
	int x[] = {0, WIDTH - size, WIDTH / 2};
	int y[] = {0, HEIGHT - size, HEIGHT / 1.3 - size, HEIGHT / 3 - size};

	x[0] += sc->sec * speed;
	x[1] -= sc->sec * speed;
	if (x[0] + size > WIDTH) {
		x[0] = 0;
		x[1] = WIDTH - size;
		sfClock_restart(sc->clock);
		speed += 100;
	}
	draw_it(sc, x, y, size);
}
