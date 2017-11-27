/*
** EPITECH PROJECT, 2017
** File Name : shapes-functions.c
** File description:
** By Arthur Teisseire
*/

#include "pixel.h"

void my_put_square(framebuffer_t *buffer, unsigned int x, unsigned int y, unsigned int size_x, unsigned int size_y, sfColor color)
{
	for (unsigned int it_x = 0; it_x < size_x; it_x++)
		for (unsigned int it_y = 0; it_y < size_y; it_y++)
			my_put_pixel(buffer, x + it_x, y + it_y, color);
}

