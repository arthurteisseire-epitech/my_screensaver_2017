/*
** EPITECH PROJECT, 2017
** File Name : init_screen.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"
#include "my.h"

void init_screen(screen_t *sc, char *id_anim)
{
	sc->id_anim = my_atoi(id_anim) - 1;
	if (sc->id_anim >= MAX_ID) {
		put_bad_index(sc->id_anim);
		return;
	}
	sc->color_time.color = color(255, 0, 0, 255);
	sc->color_time.clock = sfClock_create();
	sc->clock = sfClock_create();
	sc->window = create_window();
	sc->buffer = framebuffer_create(WIDTH, HEIGHT);
	sc->texture= sfTexture_create(WIDTH, HEIGHT);
	sc->sprite = sfSprite_create();
	sfSprite_setTexture(sc->sprite, sc->texture, sfTrue);
}

sfRenderWindow *create_window(void)
{
	sfVideoMode mode = {WIDTH, HEIGHT, BIT_PER_PIXEL};
	sfRenderWindow *window;

	window = sfRenderWindow_create(
		mode, TITLE, sfResize | sfFullscreen | sfClose, NULL
	);
	if (!window)
		return (NULL);
	sfRenderWindow_setFramerateLimit(window, 40);
	return (window);
}
