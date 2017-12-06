/*
** EPITECH PROJECT, 2017
** File Name : init_animations.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

anim_f *init_animations()
{
	anim_f *anims = malloc(sizeof(anim_f *) * 1);

	anims[0] = anim1;
	return (anims);
}
