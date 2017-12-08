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
void set_circle_pos(circle_t *circle, double x_new_pos, double y_new_pos);

void move_back(int *x, float speed);
void move_forward(int *x, float speed);

#endif
