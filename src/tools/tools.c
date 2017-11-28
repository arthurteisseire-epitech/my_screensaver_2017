/*
** EPITECH PROJECT, 2017
** File Name : tools.c
** File description:
** By Arthur Teisseire
*/

#include "tools.h"

sfVector2f add_vector(sfVector2f u, sfVector2f v)
{
	sfVector2f uv;

	uv.x = u.x + v.x;
	uv.y = u.y + v.y;
	return (uv);
}

entity_t *init_entity(sfVector2f pos, sfVector2f index_rect, sfVector2f speed, sfVector2f size)
{
	entity_t *entity = malloc(sizeof(entity_t));

	entity->pos = pos;
	entity->size = size;
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
