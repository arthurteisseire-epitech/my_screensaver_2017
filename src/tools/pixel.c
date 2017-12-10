/*
** EPITECH PROJECT, 2017
** File Name : pixel.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void clear(framebuffer_t *buffer)
{
	int size = buffer->height * buffer->width * 4;

	for (int i = 0; i < size; i++)
		buffer->pixels[i] = 0;
}

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));

	buffer->width = width;
	buffer->height = height;
	buffer->pixels = malloc(sizeof(sfUint8) * width * height * 4);
	clear(buffer);
	return (buffer);
}
void my_put_pixel(framebuffer_t *buffer, unsigned x, unsigned y, sfColor color)
{
	unsigned pos_x = x * 4;
	unsigned pos_y = buffer->width * y * 4;

	buffer->pixels[pos_y + pos_x] = color.r;
	buffer->pixels[pos_y + pos_x + 1] = color.g;
	buffer->pixels[pos_y + pos_x + 2] = color.b;
	buffer->pixels[pos_y + pos_x + 3] = color.a;
}

void fade(screen_t *sc)
{
	int size = sc->buffer->height * sc->buffer->width * 4;

	for (int i = 3; i < size; i += 4)
		if (sc->buffer->pixels[i] >= 2)
			sc->buffer->pixels[i] -= 2;
}

