/*
** EPITECH PROJECT, 2017
** File Name : map.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

sfColor map(float time)
{
	sfColor color = {255, 0, 0, 0};
	int sec = (int)time % 6;

	if (sec < 1)
		color.b = time * 255;
	return (color);
}
