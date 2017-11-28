/*
** EPITECH PROJECT, 2017
** File Name : init_textures.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void init_textures(screen_t *sc)
{
	for (int i = 0; i < sc->nb_spritesheet; i++) {
		sc->spritesheets[i] = malloc(sizeof(spritesheet_t));
		sc->spritesheets[i]->texture = sfTexture_create(WIDTH, HEIGHT);
	}
	sc->spritesheets[0] = spritesheet0(sc);
}
