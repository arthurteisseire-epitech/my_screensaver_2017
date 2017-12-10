/*
** EPITECH PROJECT, 2017
** File Name : anim6.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

static teddy_t teddy;

static void shade_it(framebuffer_t *buffer)
{
	int size = buffer->height * buffer->width * 4;

	for (int i = 3; i < size; i += 4)
		buffer->pixels[i] = (buffer->pixels[i] + 9) % 252;
}

void anim6(screen_t *sc)
{
	static int not_clear = 1;
	int size = 300;
	int speed = 25;
	int x = WIDTH / 2;
	int y;

	if (not_clear) {
		clear(sc->buffer);
		not_clear = 0;
	}
	if (size >= -60) {
		size -= sc->sec * speed;
		y = HEIGHT / 2 + size / 2;
		init_sizes(&teddy, size);
		set_pos(&teddy, x, y);
		set_circles(&teddy);
		draw_teddy(sc, &teddy);
	}
	shade_it(sc->buffer);
}
