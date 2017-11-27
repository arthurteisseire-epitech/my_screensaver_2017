/*
** EPITECH PROJECT, 2017
** File Name : animation.h
** File description:
** By Arthur Teisseire
*/

#ifndef ANIMATION_H
#define ANIMATION_H

#include "entity.h"

typedef struct animation {
	char *name;
	char *description;
	entity_t *entities[];
} animation_t;

#endif
