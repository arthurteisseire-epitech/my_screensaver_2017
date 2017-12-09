/*
** EPITECH PROJECT, 2017
** File Name : screen.h
** File description:
** By Arthur Teisseire
*/

#ifndef SCREEN_H
#define SCREEN_H

#define WIDTH 1920
#define HEIGHT 1080

#define TITLE "Le Titre"
#define BIT_PER_PIXEL 32
#define MAX_ID 6

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <math.h>
#include "framebuffer.h"
#include "struct_screen.h"
#include "messages.h"
#include "animations.h"
#include "tools.h"
#include "circle.h"
#include "teddy.h"

void init_screen(screen_t *sc, char *id_anim);
sfRenderWindow *create_window();

void event(screen_t *s);
void update(screen_t *sc);
void draw(screen_t *sc);

/* TEDDY */
void set_ted(circle_t *circle, sfVector2i *v, int radius);
void init_sizes(teddy_t *teddy, int size);
void set_pos(teddy_t *teddy, int x, int y);
void set_circles(teddy_t *teddy);
void draw_teddy(screen_t *sc, teddy_t *teddy);

void clear(framebuffer_t *buffer);

#endif
