/*
** EPITECH PROJECT, 2017
** File Name : error_msg.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"
#include "my.h"

void put_invalid_arg(char *str)
{
	my_puterror("./my_screensaver: invalid argument: ");
	my_puterror(str);
	my_puterror("\nretry with -h\n");
}

void put_bad_nb(int ac)
{
	my_puterror("./my_screensaver: ");
	my_puterror("bad number arguments: ");
	my_put_nbr(ac - 1);
	my_puterror(" given but 1 is required\n");
	my_puterror("retry with -h\n");
}

void put_bad_index(int id_index)
{
	my_puterror("./my_screensaver: bad effect_no ");
	my_put_nbr(id_index + 1);
	my_puterror(": must be between 1 and 4.\n");
}
