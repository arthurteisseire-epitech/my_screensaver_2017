/*
** EPITECH PROJECT, 2017
** File Name : init_category.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

void init_category(category_t *category, framebuffer_t *buffer)
{
	category->texture = sfTexture_create(WIDTH, HEIGHT);
	sfTexture_updateFromPixels(category->texture, buffer->pixels, WIDTH, HEIGHT, 0, 0);
	init_entities(category);
}

void init_entities(category_t *category)
{
	category->nb_entities = 1;
	entities[0] = init_entity({0, 0}, {10, 10}, {5, 0});
	for (int i = 0; i != category->nb_entities; i++)
		sfSprite_setTexture(category->entities[i]->sprite, category->texture, 1); 
}

entity_t *init_entity(sfVector *pos, sfVector *size, sfVector *speed)
{
	entity_t *entity;

	entity->pos = pos;
	entity->size = size;
	entity->speed = speed;
	return (entity);
}
