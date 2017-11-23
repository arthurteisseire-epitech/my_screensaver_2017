/*
** EPITECH PROJECT, 2017
** File Name : entity.h
** File description:
** By Arthur Teisseire
*/

#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.h>

typedef struct entity {
	sfVector *pos;
	sfVector *size;
	sfVector *speed;
	sfSprite *sprite;
	void (*update)();
} entity_t;

#endif
