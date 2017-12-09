/*
** EPITECH PROJECT, 2017
** File Name : teddy.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void set_ted(circle_t *circle, sfVector2i *v, int radius)
{
	circle->pos.x = v->x;
	circle->pos.y = v->y;
	circle->radius = radius;
}
