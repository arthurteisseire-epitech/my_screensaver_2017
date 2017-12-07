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
	sfVector2i end = {600, 200};
	circle_t circle = {400, 400, 300};

	draw_circle(sc->buffer, circle, sfRed);
	draw_line(sc->buffer, origin, end, sfRed);
}
