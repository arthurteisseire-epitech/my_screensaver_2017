/*
** EPITECH PROJECT, 2017
** File Name : set_color.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

sfColor color(sfUint8 r, sfUint8 g, sfUint8 b, sfUint8 a)
{
	sfColor color;

	color.r = r;
	color.g = g;
	color.b = b;
	color.a = a;
	return (color);
}
