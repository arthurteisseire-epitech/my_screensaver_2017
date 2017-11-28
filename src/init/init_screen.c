/*
** EPITECH PROJECT, 2017
** File Name : init_screen.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void init_screen(screen_t *sc)
{
	sc->nb_anim = 2;
	sc->nb_spritesheet = 1;
	sc->window = create_window();
	sc->animations = malloc(sizeof(animation_t *) * sc->nb_anim);
	sc->spritesheets = malloc(sizeof(spritesheet_t *) * sc->nb_spritesheet);
}

sfRenderWindow *create_window()
{
	sfVideoMode mode = {WIDTH, HEIGHT, BIT_PER_PIXEL};
	sfRenderWindow *window;

	window = sfRenderWindow_create(mode, TITLE, sfResize | sfClose, NULL);
	if (!window)
		exit(84);
	sfRenderWindow_setFramerateLimit(window, 120);
	return (window);
}
