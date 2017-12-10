/*
** EPITECH PROJECT, 2017
** File Name : teddy.h
** File description:
** By Arthur Teisseire
*/

#ifndef TEDDY_H
#define TEDDY_H

typedef struct teddy_size {
	int st;
	int head;
	int member;
	int less_m;
	int less_h;
	int ear;
} teddy_size_t;

typedef struct teddy_pos {
	sfVector2i t;
	sfVector2i h;
	sfVector2i hl;
	sfVector2i hr;
	sfVector2i fl;
	sfVector2i fr;
	sfVector2i ear_l;
	sfVector2i ear_r;
} teddy_pos_t;

typedef struct teddy_circles {
	circle_t st;
	circle_t head;
	circle_t hl;
	circle_t hr;
	circle_t fl;
	circle_t fr;
	circle_t ear_l;
	circle_t ear_r;
} teddy_circles_t;

typedef struct teddy {
	teddy_size_t size;
	teddy_pos_t pos;
	teddy_circles_t circles;
} teddy_t;

void set_ted(circle_t *circle, sfVector2i *v, int radius);
void init_sizes(teddy_t *teddy, int size);
void set_pos(teddy_t *teddy, int x, int y);
void set_circles(teddy_t *teddy);
void draw_teddy(screen_t *sc, teddy_t *teddy);

#endif
