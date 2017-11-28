/*
** EPITECH PROJECT, 2017
** File Name : update.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void update(screen_t *sc)
{
	sc->animations[0]->launch(sc->animations[0]);
	sc->animations[1]->launch(sc->animations[1]);
}
