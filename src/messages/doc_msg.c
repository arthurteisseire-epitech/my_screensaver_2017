/*
** EPITECH PROJECT, 2017
** File Name : doc_msg.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void put_help()
{
	my_putstr("animation rendering in a CSFML window.\n");
	my_putstr("\nUSAGE\n");
	my_putstr(" ./my_screensaver [OPTIONS] animation_id\n");
	my_putstr("  animation_id    ID of the animation to process (between 1 and 20).\n");
	my_putstr("\nOPTIONS\n");
	my_putstr(" -d               print the description of all the animations and quit.\n");
	my_putstr(" -h               print the usage and quit.\n");
	my_putstr("\nUSER INTERACTIONS\n");
	my_putstr(" LEFT_ARROW       switch to the previous animation.\n");
	my_putstr(" RIGHT_ARROW      switch to the next animation.\n\n");
}

void put_description()
{
	my_putstr("1:\tPas encore\n");
}
