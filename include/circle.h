/*
** EPITECH PROJECT, 2017
** File Name : circle.h
** File description:
** By Arthur Teisseire
*/

#ifndef CIRCLE_H
#define CIRCLE_H

typedef struct circle {
	double x;
	double y;
	double radius;
} circle_t;

void draw_circle(framebuffer_t *buffer, circle_t circle, sfColor color);

#endif
