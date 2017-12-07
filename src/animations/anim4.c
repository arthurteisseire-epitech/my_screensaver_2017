/*
** EPITECH PROJECT, 2017
** File Name : anim4.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void anim4(screen_t *sc)
{
	sfVector2i origin = {2, 2};
	sfVector2i end = {200, 200};

	draw_line(sc->buffer, origin, end, sfRed);;
}
