/*
** EPITECH PROJECT, 2017
** File Name : init_animations.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

void init_animations(animation_t *animations[])
{
	set_description(animations);
	set_entities(animations);
}

void init_entities(animation_t *animations[])
{
	animations[0]->entities = init_entities_anim1();
	animations[1]->entities = init_entities_anim2();
}

entity_t *init_entity(sfVector2f pos, sfVector2f index_rect, sfVector2f speed)
{
	entity_t *entity = malloc(sizeof(entity_t));

	entity->pos = pos;
	entity->index_rect = index_rect;
	entity->speed = speed;
	return (entity);
}

sfIntRect set_rect(int left, int top, int width, int height)
{
	sfIntRect rect;

	rect.left = left;
	rect.top = top;
	rect.width = width;
	rect.height = height;
	return (rect);
}
