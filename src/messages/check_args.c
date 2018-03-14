/*
** EPITECH PROJECT, 2017
** File Name : check_args.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"
#include "my.h"

int check_args(char *str)
{
	int num = my_atoi(str);
	if (my_strcmp(str, "-h") == 0) {
		put_help();
		return (1);
	} else if (my_strcmp(str, "-d") == 0) {
		put_description();
		return (1);
	} else if (!my_str_isnum(str) || num > 4 || num < 1) {
		put_invalid_arg(str);
		return (-1);
	}
	return (0);
}
