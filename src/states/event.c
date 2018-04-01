/*
** EPITECH PROJECT, 2017
** File Name : event.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

static void check_key(screen_t *sc)
{
	if (sc->event.key.code == sfKeyLeft) {
		sc->id_anim--;
		if (sc->id_anim < 0)
			sc->id_anim = MAX_ID - 1;
	}
	else if (sc->event.key.code == sfKeyRight)
		sc->id_anim = (sc->id_anim + 1) % MAX_ID;
	if (sc->id_anim == 5)
		clear(sc->buffer);
}

void event(screen_t *sc)
{
	while (sfRenderWindow_pollEvent(sc->window, &sc->event))
		if (sc->event.type == sfEvtClosed)
			sfRenderWindow_close(sc->window);
		else if (sc->event.type == sfEvtKeyPressed)
			check_key(sc);
}

