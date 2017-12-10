/*
** EPITECH PROJECT, 2017
** File Name : tools.h
** File description:
** By Arthur Teisseire
*/

#ifndef TOOLS_H
#define TOOLS_H

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void my_put_pixel(framebuffer_t *buffer, unsigned int x, unsigned int y, sfColor color);

void draw_sqrt(framebuffer_t *buffer, sfVector2i pos, unsigned size, sfColor c);
void draw_line(framebuffer_t *buffer, sfVector2i a, sfVector2i b, sfColor c);

void clear_buffer(framebuffer_t *buffer);
void clear(framebuffer_t *buffer);

sfColor color(sfUint8 r, sfUint8 g, sfUint8 b, sfUint8 a);
sfColor random_grey_color(void);
sfColor random_color(void);
sfColor map(clock_color_t *ct);

float get_decimal(float time);
void set_vpos(sfVector2i *vector, int x_new_pos, int y_new_pos);
void explode(screen_t *sc);

#endif
