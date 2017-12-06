/*
** EPITECH PROJECT, 2017
** File Name : init_screen.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void init_screen(screen_t *sc, char *id_anim)
{
	sc->id_anim = my_atoi(id_anim);
	sc->window = create_window();
	sc->buffer = framebuffer_create(WIDTH, HEIGHT);
	sc->texture= sfTexture_create(WIDTH, HEIGHT);
	sc->sprite = sfSprite_create();
	sfSprite_setTexture(sc->sprite, sc->texture, sfTrue);
}

sfRenderWindow *create_window()
{
	sfVideoMode mode = {WIDTH, HEIGHT, BIT_PER_PIXEL};
	sfRenderWindow *window;

	window = sfRenderWindow_create(mode, TITLE, sfResize |/* sfFullscreen |*/ sfClose, NULL);
	if (!window)
		exit(84);
	sfRenderWindow_setFramerateLimit(window, 120);
	return (window);
}