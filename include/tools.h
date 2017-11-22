/*
** EPITECH PROJECT, 2017
** File Name : tools.h
** File description:
** By Arthur Teisseire
*/

#ifndef TOOLS_H
#define TOOLS_H

#define WIDTH 800
#define HEIGHT 600

sfSprite *create_sprite_from_buffer(framebuffer_t *buffer);
void check_exit(sfRenderWindow *window);
sfRenderWindow *create_window(char *title, sfVideoMode mode);

#endif
