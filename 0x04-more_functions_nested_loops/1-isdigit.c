#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isdigit - Checks for if is a digit
 *
 * @c: Character to be checked
 *
 * Return: 1 (if digit) OR 0 (not digit)
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
