/*
** EPITECH PROJECT, 2017
** File Name : shapes-functions.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void draw_sqrt(framebuffer_t *buffer, sfVector2i pos, unsigned size, sfColor c)
{
	for (unsigned it_x = 0; it_x < size; it_x++)
		for (unsigned it_y = 0; it_y < size; it_y++)
			my_put_pixel(buffer, pos.x + it_x, pos.y + it_y, c);
}

void draw_line(framebuffer_t *buffer, sfVector2i a, sfVector2i b, sfColor color)
{
	int dx = b.x - a.x;
	int dy = b.y - a.y;
	int y;

	for (int x = a.x; x < b.x; x++) {
		y = a.y + (dy * (x - a.x) / dx);
		my_put_pixel(buffer, x, y, color);
	}
}

void set_circle_pos(circle_t *circle, int x_new_pos, int y_new_pos)
{
	circle->pos.x = x_new_pos;
	circle->pos.y = y_new_pos;
}

void draw_circle(framebuffer_t *buffer, circle_t *circle, sfColor color)
{
	int size = circle->radius + 1;
	int r_sqrt = pow(circle->radius, 2);

	for (int x = circle->pos.x - circle->radius; x < size + circle->pos.x; x++)
		for (int y = circle->pos.y - circle->radius; y < size + circle->pos.y; y++)
			if ((pow(x - circle->pos.x, 2) + pow(y - circle->pos.y, 2)) <= r_sqrt)
				my_put_pixel(buffer, x, y, color);
}

void set_vpos(sfVector2i *vector, int x_new_pos, int y_new_pos)
{
	vector->x = x_new_pos;
	vector->y = y_new_pos;
}
