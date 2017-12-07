/*
** EPITECH PROJECT, 2017
** File Name : anim1.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void anim1(screen_t *sc)
{
	static double x = 30;
	static double y = 30;
	double size = 15;
	double d = size * 2;
	circle_t circle = {d, d, size};

	while (y + d < HEIGHT) {
		set_circle_pos(&circle, x + d, y + d);
		//my_put_square(sc->buffer, x, y, size, size, random_color());
		draw_circle(sc->buffer, circle, random_color());
		x += d;
		if (x + d >= WIDTH) {
			y += d;
			x = size;
		}
	}
	x = size;
	y = size;
}
