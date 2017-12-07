/*
** EPITECH PROJECT, 2017
** File Name : tools.h
** File description:
** By Arthur Teisseire
*/

#ifndef TOOLS_H
#define TOOLS_H

void my_put_square(framebuffer_t *buffer, unsigned int x, unsigned int y, unsigned int size_x, unsigned int size_y, sfColor color);
void my_put_circle(framebuffer_t *buffer, unsigned x, unsigned y, unsigned radius, sfColor color);
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void clear_buffer(framebuffer_t *buffer);
void my_put_pixel(framebuffer_t *buffer, unsigned int x, unsigned int y, sfColor color);
sfColor random_grey_color();
sfColor random_color();
void draw_line(framebuffer_t *buffer, sfVector2i point_a, sfVector2i point_b, sfColor color);

#endif
