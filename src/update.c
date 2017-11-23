/*
** EPITECH PROJECT, 2017
** File Name : update.c
** File description:
** By Arthur Teisseire
*/

#include "game.h"

void update(category_t *category, framebuffer_t *buffer)
{
	buffer = framebuffer_create(WIDTH, HEIGHT);
	my_put_square(buffer, 0, 0, 50, 50, sfRed);
	init_category(category, buffer);
}
