/*
** EPITECH PROJECT, 2017
** File Name : circle.h
** File description:
** By Arthur Teisseire
*/

#ifndef CIRCLE_H
#define CIRCLE_H

typedef struct circle {
	sfVector2i pos;
	int radius;
} circle_t;

void draw_circle(framebuffer_t *buffer, circle_t *circle, sfColor color);
void set_circle_pos(circle_t *circle, int x_new_pos, int y_new_pos);

void move_back(int *x, int speed);
void move_forward(int *x, int speed);

#endif
