/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include "pixel.h"

int main(void)
{
	sfVideoMode mode = {WIDTH, HEIGHT, 32};
	sfRenderWindow *window;
	sfSprite *sprite;
	framebuffer_t *buffer = framebuffer_create(WIDTH, HEIGHT);

	window = create_window("Faire des lignes", mode);
	while (sfRenderWindow_isOpen(window))
	{
		check_exit(window);
		/* Clear the screen */
		sfRenderWindow_clear(window, sfBlack);

		my_put_pixel(buffer, 1, 1, sfRed);
		my_put_pixel(buffer, 0, 0, sfRed);
		my_put_square(buffer, 20, 20, 50, 200, sfRed);
		my_put_square(buffer, 500, 400, 200, 70, sfRed);

		sprite = create_sprite_from_buffer(buffer);
		sfRenderWindow_drawSprite(window, sprite, NULL);
		/* Update the window */
		sfRenderWindow_display(window);
	}
	sfRenderWindow_destroy(window);
	return (0);
}
