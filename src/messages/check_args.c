/*
** EPITECH PROJECT, 2017
** File Name : check_args.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"

void check_args(char *str)
{
	if (str[0] == '-') {
		if (str[1] == 'h' && str[2] == '\0') {
			put_help();
			exit(0);
		} else if (str[1] == 'd' && str[2] == '\0') {
			put_description();
			exit(0);
		} else {
			put_invalid_args();
			exit(84);
		}
	}
}
