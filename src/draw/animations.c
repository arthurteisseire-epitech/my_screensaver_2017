/*
** EPITECH PROJECT, 2017
** File Name : animation.c
** File description:
** By Arthur Teisseire
*/
#include "screen.h"

void animation0(animation_t *animation)
{
	sfVector2f new_pos;

	for (int i = 0; i < animation->nb_entities; i++) {
		new_pos = add_vector(animation->entities[i]->pos, animation->entities[i]->speed);
		if (new_pos.x + animation->entities[i]->size.x > WIDTH || new_pos.x < 0)
			animation->entities[i]->speed.x *= -1;
		if (new_pos.y + animation->entities[i]->size.y > HEIGHT || new_pos.y < 0)
			animation->entities[i]->speed.y *= -1;
		sfSprite_setPosition(animation->entities[i]->sprite, new_pos);
		animation->entities[i]->pos = new_pos;
	}
}

void animation1(animation_t *animation)
{
	sfVector2f new_pos;

	for (int i = 0; i < animation->nb_entities; i++) {
		new_pos = add_vector(animation->entities[i]->pos, animation->entities[i]->speed);
		if (new_pos.x + animation->entities[i]->size.x > WIDTH || new_pos.x < 0) {
			new_pos.x = 0;
			animation->entities[i]->speed.x = (int)animation->entities[i]->speed.x % 50;
			animation->entities[i]->speed.x += 1;
		}
		if (new_pos.y + animation->entities[i]->size.y > HEIGHT || new_pos.y < 0) {
			new_pos.y = 0;
			animation->entities[i]->speed.y = (int)animation->entities[i]->speed.y % 50;
			animation->entities[i]->speed.y += 1;
		}
		sfSprite_setPosition(animation->entities[i]->sprite, new_pos);
		animation->entities[i]->pos = new_pos;
	}
}
