/*
** EPITECH PROJECT, 2017
** File Name : event.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void event(screen_t *sc)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(sc->window, &event))
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(sc->window);
}
