/*
** EPITECH PROJECT, 2017
** File Name : tools.c
** File description:
** By Arthur Teisseire
*/

#include "pixel.h"

sfSprite *create_sprite_from_buffer(framebuffer_t *buffer)
{
	sfTexture *texture = sfTexture_create(WIDTH, HEIGHT);
	sfSprite *sprite = sfSprite_create();

	sfTexture_updateFromPixels(texture, buffer->pixels, WIDTH, HEIGHT, 0, 0);
	sfSprite_setTexture(sprite, texture, 1);
	return (sprite);
}

void check_exit(sfRenderWindow *window)
{
	sfEvent event;

	/* Process events */
	while (sfRenderWindow_pollEvent(window, &event))
	{
		/* Close window : exit */
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
	}
}

sfRenderWindow *create_window(char *title, sfVideoMode mode)
{
	sfRenderWindow *window;

	window = sfRenderWindow_create(mode, title, sfResize | sfClose, NULL);
	if (!window)
		exit(84);
	return (window);
}
