/*
** EPITECH PROJECT, 2017
** File Name : struct.h
** File description:
** By Arthur Teisseire
*/

#ifndef STRUCT_H
#define STRUCT_H

#include <SFML/Graphics.h>
#include <stdlib.h>

typedef struct position {
	float x;
	float y;
} position_t;

typedef struct obj {
	float speed;
	position_t pos;
	sfColor color;
	sfSprite sprite;
	sfTexture texture;
} obj_t;

#endif
