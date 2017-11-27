/*
** EPITECH PROJECT, 2017
** File Name : init_animations.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

void init_animations(animation_t *animations[])
{
	set_description(animations);
	set_entities(animations);
}

void init_entities(animation_t *animations[])
{
	animations[0]->entities = init_entities_anim1();
	animations[1]->entities = init_entities_anim2();
}
