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

void event(Game_t *game)
{
	/* Process events */
	while (sfRenderWindow_pollEvent(game->window, &game->event))
	{
		/* Close window : exit */
		if (game->event.type == sfEvtClosed)
			sfRenderWindow_close(game->window);
	}
}
