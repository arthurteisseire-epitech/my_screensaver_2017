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
	sfVector2f pos1 = {0, 0};
	sfVector2f size1 = {10, 10};
	sfVector2f speed1 = {5, 0};
	category->nb_entities = 1;
	category->entities[0] = init_entity(&pos1, &size1, &speed1);
	for (unsigned int i = 0; i != category->nb_entities; i++)
		sfSprite_setTexture(category->entities[i]->sprite, category->texture, 1); 
}

entity_t *init_entity(sfVector2f *pos, sfVector2f *size, sfVector2f *speed)
{
	entity_t *entity = malloc(sizeof(entity_t));

	entity->pos = pos;
	entity->size = size;
	entity->speed = speed;
	return (entity);
}
