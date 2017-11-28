/*
** EPITECH PROJECT, 2017
** File Name : init_entities.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void init_entities_anim0(screen_t *sc)
{
	animation_t *animation = sc->animations[0];

	animation->nb_entities = 2;
	animation->entities = malloc(sizeof(entity_t *) * animation->nb_entities);
	for (int i = 0; i < animation->nb_entities; i++)
		animation->entities[i] = malloc(sizeof(entity_t));
	animation->entities[0] = entity0(sc->spritesheets);
	animation->entities[1] = entity1(sc->spritesheets);
}

void init_entities_anim1(screen_t *sc)
{
	animation_t *animation = sc->animations[1];

	animation->nb_entities = 1;
	animation->entities = malloc(sizeof(entity_t *) * animation->nb_entities);
	for (int i = 0; i < animation->nb_entities; i++)
		animation->entities[i]->sprite = sfSprite_create();
	animation->entities[0] = entity0(sc->spritesheets);
	animation->entities[1] = entity1(sc->spritesheets);
}
