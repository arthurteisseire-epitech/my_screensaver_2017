/*
** EPITECH PROJECT, 2017
** File Name : error_msg.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"
#include "my.h"

void put_invalid_args()
{
	my_puterror("Invalid args\n");
}

void put_bad_nb()
{
	my_puterror("./my_screensaver: bad arguments: 0 given but 1 is required\nretry with -h\n");
}

void put_bad_index()
{
	my_puterror("Animation ID too big\nCheck for -h option\n");
}
