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
	//int a = (point_a.y - point_b.x) / (point_a.x - point_b.x);
	//int b = point_a.y - a * point_a.x;

	while (point_a.x <= point_b.x) {
		my_put_pixel(buffer, point_a.x, point_a.y, color);
		point_a.x++;
	}
}

/*void my_put_circle(framebuffer_t *buffer, unsigned x, unsigned y, unsigned radius, sfColor color)
{
}
*/
