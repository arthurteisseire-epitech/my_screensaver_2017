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

typedef struct screen {
	sfRenderWindow *window;
	framebuffer_t *buffer;
	sfTexture *texture;
	sfSprite *sprite;
} screen_t;

#endif
