/*
** EPITECH PROJECT, 2017
** File Name : screen.h
** File description:
** By Arthur Teisseire
*/

#ifndef SCREEN_H
#define SCREEN_H

#define WIDTH 800
#define HEIGHT 600
#define TITLE "Le Titre"
#define BIT_PER_PIXEL 32

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "framebuffer.h"
#include "struct_screen.h"
#include "entity.h"
#include "tools.h"
#include "spritesheet.h"
#include "animation.h"

void init_screen(screen_t *sc);
sfRenderWindow *create_window();

void event(screen_t *s);
void update(screen_t *sc);
void disp(screen_t *sc);

sfIntRect set_rect(int left, int top, int width, int height);
sfVector2f add_vector(sfVector2f u, sfVector2f v);

void init_animations(screen_t *sc);
void init_entities(screen_t *sc);
void set_animations(screen_t *sc);

void init_entities_anim0(screen_t *sc);
void init_entities_anim1(screen_t *sc);

void init_textures(screen_t *sc);
spritesheet_t *spritesheet0(screen_t *sc);


#endif
