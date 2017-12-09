/*
** EPITECH PROJECT, 2017
** File Name : circle.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void set_circle_pos(circle_t *circle, int x_new_pos, int y_new_pos)
{
	circle->pos.x = x_new_pos;
	circle->pos.y = y_new_pos;
}

void draw_circle(framebuffer_t *buffer, circle_t *circle, sfColor color)
{
	int size = circle->radius + 1;
	int r_sqrt = pow(circle->radius, 2);
	int x = circle->pos.x - circle->radius;
	int y;
	int line_x;
	int line_y;

	while (x < size + circle->pos.x) {
		y = circle->pos.y - circle->radius;
		while (y < size + circle->pos.y) {
			line_x = pow(x - circle->pos.x, 2);
			line_y = pow(y - circle->pos.y, 2);
			if (line_x + line_y <= r_sqrt)
				my_put_pixel(buffer, x, y, color);
			y++;
		}
		x++;
	}
}
