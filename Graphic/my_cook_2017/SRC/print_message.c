/*
** EPITECH PROJECT, 2017
** print_h.c
** File description:
** print_h
*/

#include "../my_screen.h"

void print_h(void)
{
	my_putstr("animation rendering in a CSFML window.\n");
	my_putchar('\n');
	my_putstr("USAGE:\n");
	my_putstr("\t./cook [OPTIONS]\n");
	my_putchar('\n');
	my_putstr("OPTIONS:\n");
	my_putstr("\t-d \t Print the project's description ");
	my_putstr("and quit.\n");
	my_putstr("\t-h \t Print the usage and quit.\n");
	my_putstr("\t./my_cook \t Start the game.\n");
}

void print_d(void)
{
	my_putstr("animation rendering in a CSFML window.\n");
	my_putchar('\n');
	my_putstr("The aim of this project is to make a dish ");
	my_putstr("like the original game \"Cook\".\n");
	my_putchar('\n');
	my_putstr("TRY HARD AND HAVE FUN !\n");
	my_putchar('\n');
}
