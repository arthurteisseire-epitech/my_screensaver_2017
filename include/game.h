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

typedef struct game {
	framebuffer_t *buffer;
	//sfEvent *event;
	sfRenderWindow *window;
} game_t;

typedef struct category {
	unsigned int nb_entities;
	sfTexture *texture;
	entity_t *entities[];
} category_t;

void event(game_t *game);
void update(category_t *category, framebuffer_t *buffer);
void init_game(game_t *game);
void init_category(category_t *category, framebuffer_t *buffer);
void init_entities(category_t *category);
entity_t *init_entity(sfVector2f *pos, sfVector2f *size, sfVector2f *speed);
sfRenderWindow *create_window();
void disp(game_t *game, category_t *category);

#endif
