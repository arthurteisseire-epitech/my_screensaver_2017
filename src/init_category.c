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
	init_entities(category, size);
}

void init_entities(category_t *category)
{
	for (int i = 0; i < size; i++) {
		sfSprite_setTexture(category->entities[i]->sprite, category->texture, 1); 
	}
}
