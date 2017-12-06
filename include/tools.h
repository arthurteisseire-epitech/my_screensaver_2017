/*
** EPITECH PROJECT, 2017
** File Name : tools.h
** File description:
** By Arthur Teisseire
*/

#ifndef TOOLS_H
#define TOOLS_H

void my_put_square(framebuffer_t *buffer, unsigned int x, unsigned int y, unsigned int size_x, unsigned int size_y, sfColor color);
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void clear_buffer(framebuffer_t *buffer);
void my_put_pixel(framebuffer_t *buffer, unsigned int x, unsigned int y, sfColor color);

#endif
