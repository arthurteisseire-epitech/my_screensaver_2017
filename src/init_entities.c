/*
** EPITECH PROJECT, 2017
** File Name : init_entities.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

entity_t *init_entities_anim1()
{
	int nb_entities = 2;
	entity_t entities[nb_entities];

	for (int i = 0; i < nb_entities; i++)
		entities[i]->sprite = sfSprite_create();
	entities[0] = entity0();
	entities[1] = entity0();
}

entity_t *init_entities_anim2()
{
	int nb_entities = 2;
	entity_t entities[nb_entities];

	for (int i = 0; i < nb_entities; i++)
		entities[i]->sprite = sfSprite_create();
	entities[0] = entity0();
	entities[1] = entity0();
}
