/*
** EPITECH PROJECT, 2017
** File Name : update.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

void update(category_t *category, framebuffer_t *buffer)
{
	sfVector2f new_pos;

	for (unsigned int i = 0; i < category->nb_entities; i++) {
		new_pos = add_vector(category->entities[i]->pos, category->entities[i]->speed);
		if (new_pos.x + category->rect.width > WIDTH || new_pos.x < 0)
			category->entities[i]->speed.x *= -1;
		if (new_pos.y + category->rect.height > HEIGHT || new_pos.y < 0)
			category->entities[i]->speed.y *= -1;
		sfSprite_setPosition(category->entities[i]->sprite, new_pos);
		category->entities[i]->pos = new_pos;
	}
}

sfVector2f add_vector(sfVector2f u, sfVector2f v)
{
	sfVector2f uv;

	uv.x = u.x + v.x;
	uv.y = u.y + v.y;
	return (uv);
}
