/*
** EPITECH PROJECT, 2017
** File Name : init_textures.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void init_textures(screen_t *sc)
{
	sc->nb_spritesheet = 1;
	sc->spritesheets[0] = spritesheet0(sc);
}
