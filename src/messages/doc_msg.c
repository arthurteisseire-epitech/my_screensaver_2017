/*
** EPITECH PROJECT, 2017
** File Name : doc_msg.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"
#include "my.h"

void put_help()
{
	my_putstr("animation rendering in a CSFML window.\n");
	my_putstr("\nUSAGE\n");
	my_putstr(" ./my_screensaver [OPTIONS] animation_id\n");
	my_putstr("  animation_id    ");
	my_putstr("ID of the animation to process (between 1 and ");
	my_put_nbr(MAX_ID);
	my_putstr(").\n");
	my_putstr("\nOPTIONS\n");
	my_putstr(" -d               ");
	my_putstr("print the description of all the animations and quit.\n");
	my_putstr(" -h               print the usage and quit.\n");
	my_putstr("\nUSER INTERACTIONS\n");
	my_putstr(" LEFT_ARROW       switch to the previous animation.\n");
	my_putstr(" RIGHT_ARROW      switch to the next animation.\n\n");
}

void put_description()
{
	my_putstr("1:\tNoise in black and white with squares\n");
	my_putstr("2:\tSquares change position with time to give a 3d impress\n");
	my_putstr("3:\t4 squares that comes faster and faster in x direction\n");
	my_putstr("4:\tTeddy bear is in the place ! bigger and bigger, then the opposit\n");
	my_putstr("5:\tTeddy become lower and lower then explode to be bigger\n");
	my_putstr("6:\tSome funny colors for Teddy !\n");
}
