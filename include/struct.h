/*
** EPITECH PROJECT, 2017
** File Name : struct.h
** File description:
** By Arthur Teisseire
*/

#ifndef STRUCT_H
#define STRUCT_H

#include "framebuffer.h"

typedef struct Obj {
	sfVector *position;
	sfVector *size;
	sfVector *speed;
	sfTexture *texture;
	sfSprite *sprite;
} Obj_t;

typedef struct Game {
	framebuffer_t *framebuffer;
	sfEvent *event;
	sfRenderWindow *window;
} Game_t;

#endif
