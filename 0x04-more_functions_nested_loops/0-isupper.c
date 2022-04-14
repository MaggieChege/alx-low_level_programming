#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - Checks for uppercase characters
 *
 * @c: Number to be checked
 *
 * Return: 1 (Success) OR 0 (Failure)
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
