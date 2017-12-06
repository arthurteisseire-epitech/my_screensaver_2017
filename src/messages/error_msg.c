/*
** EPITECH PROJECT, 2017
** File Name : error_msg.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void put_invalid_args()
{
	my_putstr("Invalid args\n");
}

void put_bad_nb()
{
	my_putstr("./my_screensaver: bad arguments: 0 given but 1 is required\nretry with -h\n");
}
