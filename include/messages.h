/*
** EPITECH PROJECT, 2017
** File Name : messages.h
** File description:
** By Arthur Teisseire
*/

#ifndef PUT_MESSAGE_H
#define PUT_MESSAGE_H

#include <stdlib.h>
#include <unistd.h>

void check_args(char *str);
void put_help();
void put_description();
void put_invalid_args();
void put_bad_nb();

void my_puterror(char *str);
void my_putstr(char *str);
int my_strlen(char *str);

#endif
