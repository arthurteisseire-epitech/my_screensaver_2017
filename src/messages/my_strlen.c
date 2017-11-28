/*
** EPITECH PROJECT, 2017
** File Name : my_strlen.c
** File description:
** By Arthur Teisseire
*/

#include "messages.h"

int my_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
