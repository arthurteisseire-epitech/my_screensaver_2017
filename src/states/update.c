/*
** EPITECH PROJECT, 2017
** File Name : update.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

void update(animation_t *animation, framebuffer_t *buffer)
{
	//void (*animation)(category_t *category)[2];

	//init_animations(animation);
	animation1(animation);
}

sfVector2f add_vector(sfVector2f u, sfVector2f v)
{
	sfVector2f uv;

	uv.x = u.x + v.x;
	uv.y = u.y + v.y;
	return (uv);
}
/*
init_animations(void *(*animation)(category_t *category))
{
	animation[0] = animation0;
	animation[1] = animation1;
}
*/
