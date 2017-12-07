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
void put_invalid_arg(char *str);
void put_bad_nb();
void put_bad_index(int id_index);

#endif
