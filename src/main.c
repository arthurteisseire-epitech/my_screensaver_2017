/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

int main(void)
{
	game_t *game;
	entity_t *entities_array[1];

	init_game(game);
	init_entities(entities_array);
	while (sfRenderWindow_isOpen(game)) {
		event(game);
		update(entities_array);
		disp(game, entities_array);
	}
	return (0);
}
