/*
** EPITECH PROJECT, 2017
** File Name : entity.h
** File description:
** By Arthur Teisseire
*/

#ifndef ENTITY_H
#define ENTITY_H

#include "spritesheet.h"

typedef struct entity {
	sfVector2f pos;
	sfVector2f speed;
	sfVector2f size;
	sfVector2f index_rect;
	sfSprite *sprite;
} entity_t;

entity_t *entity0(spritesheet_t *spritesheets[]);
entity_t *entity1(spritesheet_t *spritesheets[]);

entity_t *init_entity(sfVector2f pos, sfVector2f rect, sfVector2f speed, sfVector2f size);

#endif
