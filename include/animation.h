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
	void (*launch)(struct animation *anim);
	int nb_entities;
	entity_t *entities[];
} animation_t;

void animation0(animation_t *animation);
void animation1(animation_t *animation);

#endif
