/*
** EPITECH PROJECT, 2017
** File Name : shapes-functions.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void my_put_square(framebuffer_t *buffer, unsigned int x, unsigned int y, unsigned int size_x, unsigned int size_y, sfColor color)
{
	for (unsigned int it_x = 0; it_x < size_x; it_x++)
		for (unsigned int it_y = 0; it_y < size_y; it_y++)
			my_put_pixel(buffer, x + it_x, y + it_y, color);
}

void draw_line(framebuffer_t *buffer, sfVector2i point_a, sfVector2i point_b, sfColor color)
{
	int dx = point_b.x - point_a.x;
	int dy = point_b.y - point_a.y;
	int y;

	for (int x = point_a.x; x < point_b.x; x++) {
		y = point_a.y + (dy * (x - point_a.x) / dx);
		my_put_pixel(buffer, x, y, color);
	}
}

void draw_circle(framebuffer_t *buffer, circle_t circle, sfColor color)
{
	double size = circle.x + circle.radius + 1;
	double r_sqrt = pow(circle.radius, 2);

	for (double x = circle.x - circle.radius; x < size; x++)
		for (double y = circle.y - circle.radius; y < size; y++)
			if ((pow(x - circle.x, 2) + pow(y - circle.y, 2)) <= r_sqrt)
				my_put_pixel(buffer, (int)x, (int)y, color);
}
