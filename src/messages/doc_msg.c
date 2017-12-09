/*
** EPITECH PROJECT, 2017
** File Name : doc_msg.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"
#include "my.h"

void put_help(void)
{
	my_putstr(
	"animation rendering in a CSFML window.\n"
	"\nUSAGE\n"
	" ./my_screensaver [OPTIONS] animation_id\n"
	"  animation_id    "
	"ID of the animation to process (between 1 and "
	);
	my_put_nbr(MAX_ID);
	my_putstr(
	").\n"
	"\nOPTIONS\n"
	" -d               "
	"print the description of all the animations and quit.\n"
	" -h               print the usage and quit.\n"
	"\nUSER INTERACTIONS\n"
	" LEFT_ARROW       switch to the previous animation.\n"
	" RIGHT_ARROW      switch to the next animation.\n\n"
	);
}

void put_description(void)
{
	my_putstr(
	"1:\tNoise in black and white with squares\n"
	"2:\tSquares change position with time to give a 3d impress\n"
	"3:\t4 squares that comes faster and faster in x direction\n"
	"4:\tTeddy bear is in the place ! bigger and bigger, then the opposit\n"
	"5:\tTeddy become lower and lower then explode to be bigger\n"
	"6:\tSome funny colors for Teddy !\n"
	);
}
