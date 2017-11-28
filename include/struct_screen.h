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
#include "animation.h"
#include "spritesheet.h"

typedef struct screen {
	int nb_anim;
	int nb_spritesheet;
	sfRenderWindow *window;
	framebuffer_t *buffer;
	spritesheet_t **spritesheets;
	animation_t **animations;
} screen_t;

#endif
