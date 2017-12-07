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
#define MAX_ID 4

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <math.h>
#include "framebuffer.h"
#include "struct_screen.h"
#include "messages.h"
#include "animations.h"
#include "tools.h"

void init_screen(screen_t *sc, char *id_anim);
sfRenderWindow *create_window();

void event(screen_t *s);
void update(screen_t *sc);
void draw(screen_t *sc);

#endif
