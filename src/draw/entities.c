/*
** EPITECH PROJECT, 2017
** File Name : entities.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

entity_t *entity0(spritesheet_t *spritesheets[])
{
	entity_t *new_entity = malloc(sizeof(entity_t));
	sfVector2f pos1 = {0, HEIGHT / 2};
	sfVector2f index_rect1 = {0, 0};
	sfVector2f speed1 = {2, -1};

	new_entity = init_entity(pos1, index_rect1, speed1);
	new_entity->sprite = sfSprite_create();
	sfSprite_setTexture(new_entity->sprite, spritesheets[0]->texture, sfTrue);
	return (new_entity);
}

entity_t *entity1(spritesheet_t *spritesheets[])
{
	entity_t *new_entity = malloc(sizeof(entity_t));
	sfVector2f pos1 = {0, WIDTH / 2};
	sfVector2f index_rect1 = {0, 0};
	sfVector2f speed1 = {2, 1};

	new_entity = init_entity(pos1, index_rect1, speed1);
	new_entity->sprite = sfSprite_create();
	sfSprite_setTexture(new_entity->sprite, spritesheets[0]->texture, sfTrue);
	return (new_entity);
}
