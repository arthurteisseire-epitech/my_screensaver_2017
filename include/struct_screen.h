/*
** EPITECH PROJECT, 2017
** File Name : struct_screen.h
** File description:
** By Arthur Teisseire
*/

#ifndef STRUCT_SCREEN_H
#define STRUCT_SCREEN_H

#include <SFML/Graphics.h>
#include "framebuffer.h"

typedef struct clock_color {
	sfColor color;
	sfClock *clock;
	sfTime time;
	float sec;
} clock_color_t;

typedef struct screen {
	clock_color_t color_time;
	sfClock *clock;
	sfTime time;
	float sec;
	sfEvent event;
	sfRenderWindow *window;
	framebuffer_t *buffer;
	sfTexture *texture;
	sfSprite *sprite;
	int id_anim;
	sfColor color;
	void (*f)(int *coord, float speed);
} screen_t;

#endif
