/*
** EPITECH PROJECT, 2017
** File Name : init_category.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void init_category(category_t *category, framebuffer_t *buffer)
{
	category->texture = sfTexture_create(WIDTH, HEIGHT);
	category->rect = set_rect(0, 0, 150, 150);
	buffer = framebuffer_create(WIDTH, HEIGHT);
	my_put_square(buffer, 0, 0, category->rect.width, category->rect.height, sfRed);
	sfTexture_updateFromPixels(category->texture, buffer->pixels, WIDTH, HEIGHT, 0, 0);
	init_entities(category);
}

void init_entities(category_t *category)
{
	category->nb_entities = 2;
	category->entities[0] = entity0();
	category->entities[1] = entity1();
	for (unsigned int i = 0; i != category->nb_entities; i++) {
		category->entities[i]->sprite = sfSprite_create();
		/* I will use sfSprite_setTextureRect(sfSprite* sprite, sfIntRect rectangle); for spritesheet or else*/
		sfSprite_setTexture(category->entities[i]->sprite, category->texture, 1); 
	}
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
