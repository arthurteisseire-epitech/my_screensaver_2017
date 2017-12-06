/*
** EPITECH PROJECT, 2017
** File Name : random_color.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

sfColor random_color()
{
	sfColor color;

	color.r = rand() % 255;
	color.g = rand() % 255;
	color.b = rand() % 255;
	color.a = 255;
	return (color);
}

sfColor random_grey_color()
{
	sfColor color;
	int shade = rand() % 255;

	color.r = shade;
	color.g = shade;
	color.b = shade;
	color.a = 255;
	return (color);
}
