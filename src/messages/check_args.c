/*
** EPITECH PROJECT, 2017
** File Name : check_args.c
** File description:
** By Arthur Teisseire
*/

#include "screen.h"
#include "my.h"

void check_args(char *str)
{
	if (str[0] == '-') {
		if (str[1] == 'h' && str[2] == '\0') {
			put_help();
		} else if (str[1] == 'd' && str[2] == '\0') {
			put_description();
		}
	} else if (!my_str_isnum(str)) {
		put_invalid_arg(str);
	}
}
