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

#include "framebuffer.h"
#include "pixel.h"
#include "entity.h"

typedef struct game {
	sfVideoMode *mode;
	framebuffer_t *framebuffer;
	sfEvent *event;
	sfRenderWindow *window;
} game_t;

typedef struct category {
	int nb_entities;
	entity_t *entities[];
	sfTexture *texture;
} category_t;

void event(game_t *game);
void init_game(game_t *game);
void init_category(category_t gategory);
void create_window(game_t *game, char const *title);

#endif
