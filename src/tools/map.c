/*
** EPITECH PROJECT, 2017
** File Name : map.c
** File dectription:
** By Arthur Teisseire
*/

#include "screen.h"

sfColor map(clock_color_t *ct)
{
	int sec = (int)ct->sec % 6;
	float s_time = get_decimal(ct->sec);

	if (sec == 0) {
		ct->color.b = s_time * 255;
	} else if (sec == 1) {
		ct->color.r = 255 - s_time * 255;
	} else if (sec == 2) {
		ct->color.g = s_time * 255;
	} else if (sec == 3) {
		ct->color.b = 255 - s_time * 255;
	} else if (sec == 4) {
		ct->color.r = s_time * 255;
	} else if (sec == 5) {
		ct->color.g = 255 - s_time * 255;
	}
	return (ct->color);
}

int floar(float time)
{
	return (time - 0.5);
}

float get_decimal(float time)
{
	while (time > 1)
		time--;
	return (time);
}
