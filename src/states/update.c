/*
** EPITECH PROJECT, 2017
** File Name : update.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

static const anim_f anims[] = {
	anim1
};

void update(screen_t *sc)
{
	anims[0](sc);
}
