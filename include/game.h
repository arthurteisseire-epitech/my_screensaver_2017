/*
** EPITECH PROJECT, 2017
** File Name : game.h
** File description:
** By Arthur Teisseire
*/

#ifndef GAME_H
#define GAME_H

#define WIDTH 800
#define HEIGHT 600
#define TITLE "Le Titre"
#define BIT_PER_PIXEL 32

#include "framebuffer.h"
#include "pixel.h"
#include "entity.h"
#include "init.h"
#include "animation.h"
#include "animations.h"
#include "spritesheet.h"

typedef struct game {
	framebuffer_t *buffer;
	//sfEvent *event;
	sfRenderWindow *window;
} game_t;

void event(game_t *game);
void update(animation_t *animation, framebuffer_t *buffer);
void disp(game_t *game, animation_t *animation);
void init_game(game_t *game);
void init_category(animation_t *animation, framebuffer_t *buffer);
void init_entities(animation_t *animation[]);
entity_t *init_entity(sfVector2f pos, sfVector2f size, sfVector2f speed);
sfRenderWindow *create_window();
sfIntRect set_rect(int left, int top, int width, int height);
sfVector2f add_vector(sfVector2f u, sfVector2f v);

#endif
