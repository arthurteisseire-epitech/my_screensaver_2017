/*
** EPITECH PROJECT, 2017
** File Name : init_animations.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void init_animations(screen_t *sc)
{
	//set_description(animations);
	sc->nb_anim = 2;
	init_entities(sc);
	set_animations(sc);
}

void init_entities(screen_t *sc)
{
	init_entities_anim0(sc);
	init_entities_anim1(sc);
}

void set_animations(screen_t *sc)
{
	sc->animations[0]->launch = animation0;
	sc->animations[1]->launch = animation1;
}
