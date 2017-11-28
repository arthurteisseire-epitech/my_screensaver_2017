/*
** EPITECH PROJECT, 2017
** File Name : spritesheet.h
** File description:
** By Arthur Teisseire
*/

#ifndef SPRITESHEET_H
#define SPRITESHEET_H

#include "screen.h"

typedef struct spritesheet {
	sfTexture *texture;
	sfIntRect rect;
} spritesheet_t;

#endif
