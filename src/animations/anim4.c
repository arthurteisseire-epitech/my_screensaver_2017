/*
** EPITECH PROJECT, 2017
** File Name : anim4.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"
#include "teddy.h"

static void init_sizes(teddy_t *teddy, int size)
{
	teddy->size.st = size;
	teddy->size.head = teddy->size.st / 2;
	teddy->size.member = teddy->size.st / 6;
	teddy->size.less_m = teddy->size.st / 4;
	teddy->size.less_h = teddy->size.head / 3;
	teddy->size.ear = teddy->size.st / 10;
}

static void set_pos(teddy_t *teddy, int x, int y)
{
	set_vpos(&teddy->pos.t, x, y);
	set_vpos(&teddy->pos.h, x, y - teddy->size.st - teddy->size.head + 10);
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

static void set_circles(teddy_t *teddy)
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

static void draw_teddy(screen_t *sc, teddy_t *teddy)
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

void anim4(screen_t *sc)
{
	static int bounce = 1.0;
	int x = WIDTH / 2;
	int y = HEIGHT / 2;
	int speed = 120.0;
	teddy_t teddy;

	init_sizes(&teddy, 200);
	y -= sc->sec * speed * bounce;
	if (y - teddy.size.st - teddy.size.head * 2 - 100 <= 0) {
		bounce *= -1.0;
		sfClock_restart(sc->clock);
		sc->sec = 1.0;
	}
	if (y + teddy.size.st + teddy.size.member >= HEIGHT) {
		bounce *= -1.0;
		sfClock_restart(sc->clock);
		sc->sec = 1.0;
	}
	set_pos(&teddy, x, y);
	set_circles(&teddy);
	draw_teddy(sc, &teddy);
}

/*
void anim4(screen_t *sc)
{
	int x_speed = 200;
	int radius = 70;
	circle_t circle1 = {radius, HEIGHT / 2, radius};

	circle1.x += sc->sec * x_speed;
	if (circle1.x + radius >= WIDTH) {
		circle1.x = radius;
		sfClock_restart(sc->clock);
	}
	draw_circle(sc->buffer, circle1, map(&sc->color_time));
}
*/
