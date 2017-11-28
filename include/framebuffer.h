/*
** EPITECH PROJECT, 2017
** File Name : framebuffer.h
** File description:
** By Arthur Teisseire
*/

#ifndef FRAMEBUFFER_H
#define FRAMEBUFFER_H

#include "screen.h"

typedef struct framebuffer {
	unsigned int width;
	unsigned int height;
	sfUint8 *pixels;
} framebuffer_t;

#endif
