#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Reverse str
 * @s: a str
 * Return: Nothing
 */
void print_rev(char *s)
{
int i = 0;
	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
