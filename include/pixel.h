/*
** EPITECH PROJECT, 2017
** File Name : pixel.h
** File description:
** By Arthur Teisseire
*/

#ifndef PIXEL_H
#define PIXEL_H

#include "framebuffer.h"
#include "tools.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void my_put_pixel(framebuffer_t *buffer, unsigned int x, unsigned int y, sfColor color);
void my_put_square(framebuffer_t *buffer, unsigned int x, unsigned int y, unsigned int size_x, unsigned int size_b, sfColor color);
void init(framebuffer_t *buffer);

#endif
