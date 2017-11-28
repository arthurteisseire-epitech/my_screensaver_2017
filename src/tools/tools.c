/*
** EPITECH PROJECT, 2017
** File Name : tools.c
** File description:
** By Arthur Teisseire
*/

#include "tools.h"

sfVector2f add_vector(sfVector2f u, sfVector2f v)
{
	sfVector2f uv;

	uv.x = u.x + v.x;
	uv.y = u.y + v.y;
	return (uv);
}
