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
	framebuffer_t *buffer;
	sfEvent *event;
	sfRenderWindow *window;
} game_t;

typedef struct category {
	unsigned int nb_entities;
	entity_t *entities[];
	sfTexture *texture;
} category_t;

void event(game_t *game);
void init_game(game_t *game);
void init_category(category_t category);
void init_entities(category_t category);
entity_t *init_entity(sfVector *pos, sfVector *size, sfVector *speed);
void create_window(game_t *game, char const *title);
void disp(game_t *game, category_t *category);

#endif
