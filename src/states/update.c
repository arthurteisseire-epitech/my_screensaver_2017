/*
** EPITECH PROJECT, 2017
** File Name : update.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"
#include "my.h"

static const anim_f anims[] = {
	anim1,
	anim2,
	anim3,
	anim4
};

static void set_clock(screen_t *sc)
{
	sc->time = sfClock_getElapsedTime(sc->clock);
	sc->sec = sc->time.microseconds / 1000000.0;
}

void update(screen_t *sc)
{
	set_clock(sc);
	anims[sc->id_anim](sc);
	sfTexture_updateFromPixels(sc->texture, sc->buffer->pixels, WIDTH, HEIGHT, 0, 0);
}
