/*
** EPITECH PROJECT, 2017
** File Name : teddy.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void set_ted(circle_t *circle, sfVector2i *v, int radius)
{
	circle->pos.x = v->x;
	circle->pos.y = v->y;
	circle->radius = radius;
}

void init_sizes(teddy_t *teddy, int size)
{
	teddy->size.st = size;
	teddy->size.head = teddy->size.st / 2;
	teddy->size.member = teddy->size.st / 6;
	teddy->size.less_m = teddy->size.st / 4;
	teddy->size.less_h = teddy->size.head / 3;
	teddy->size.ear = teddy->size.st / 10;
}

void set_pos(teddy_t *teddy, int x, int y)
{
	int ad = teddy->size.st / 20;

	set_vpos(&teddy->pos.t, x, y);
	set_vpos(&teddy->pos.h, x, y - teddy->size.st - teddy->size.head + ad);
	set_vpos(&teddy->pos.hl, x - teddy->size.st + teddy->size.less_m,
		y - teddy->size.st + teddy->size.less_m);
	set_vpos(&teddy->pos.hr, x + teddy->size.st - teddy->size.less_m,
		y - teddy->size.st + teddy->size.less_m);
	set_vpos(&teddy->pos.fl, x - teddy->size.st + teddy->size.less_m,
		y + teddy->size.st - teddy->size.less_m);
	set_vpos(&teddy->pos.fr, x + teddy->size.st - teddy->size.less_m,
		y + teddy->size.st - teddy->size.less_m);
	set_vpos(&teddy->pos.ear_l, x - teddy->size.head + teddy->size.less_h,
		y - teddy->size.st - teddy->size.head * 2 + teddy->size.less_h);
	set_vpos(&teddy->pos.ear_r, x + teddy->size.head - teddy->size.less_h,
		y - teddy->size.st - teddy->size.head * 2 + teddy->size.less_h);
}

void set_circles(teddy_t *teddy)
{
	set_ted(&teddy->circles.st, &teddy->pos.t, teddy->size.st);
	set_ted(&teddy->circles.head, &teddy->pos.h, teddy->size.head);
	set_ted(&teddy->circles.hl, &teddy->pos.hl, teddy->size.member);
	set_ted(&teddy->circles.hr, &teddy->pos.hr, teddy->size.member);
	set_ted(&teddy->circles.fl, &teddy->pos.fl, teddy->size.member);
	set_ted(&teddy->circles.fr, &teddy->pos.fr, teddy->size.member);
	set_ted(&teddy->circles.ear_l, &teddy->pos.ear_l, teddy->size.ear);
	set_ted(&teddy->circles.ear_r, &teddy->pos.ear_r, teddy->size.ear);
}

void draw_teddy(screen_t *sc, teddy_t *teddy)
{
	draw_circle(sc->buffer, &teddy->circles.st, map(&sc->color_time));
	draw_circle(sc->buffer, &teddy->circles.head, map(&sc->color_time));
	draw_circle(sc->buffer, &teddy->circles.hl, map(&sc->color_time));
	draw_circle(sc->buffer, &teddy->circles.hr, map(&sc->color_time));
	draw_circle(sc->buffer, &teddy->circles.fl, map(&sc->color_time));
	draw_circle(sc->buffer, &teddy->circles.fr, map(&sc->color_time));
	draw_circle(sc->buffer, &teddy->circles.ear_r, map(&sc->color_time));
	draw_circle(sc->buffer, &teddy->circles.ear_l, map(&sc->color_time));
}
