/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** my_strlen
*/

#include <criterion/criterion.h>

int	my_strlen(char const *str)
{
	int j = 0;

	while (str[j] != '\0'){
		j++;
	}
	return (j);
}
