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
	sfVector2f *pos;
	sfVector2f *size;
	sfVector2f *speed;
	sfSprite *sprite;
} entity_t;

#endif
