/*
** EPITECH PROJECT, 2017
** File Name : new_sps.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

spritesheet_t *spritesheet0(screen_t *sc)
{
	spritesheet_t *new_sp = malloc(sizeof(spritesheet_t));
	
	new_sp->texture = sfTexture_create(WIDTH, HEIGHT);
	new_sp->rect = set_rect(0, 0, 150, 150);
	sc->buffer = framebuffer_create(WIDTH, HEIGHT);
	my_put_square(sc->buffer, 0, 0, new_sp->rect.width, new_sp->rect.height, sfRed);
	sfTexture_updateFromPixels(new_sp->texture, sc->buffer->pixels, WIDTH, HEIGHT, 0, 0);
	return (new_sp);
}
