#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swap integers a and b
 * @a: 1st int
 * @b: 2nd int
 *Return: Nothing
 */
void swap_int(int *a, int *b)
{

int temp = *a;
*a = *b;
*b = temp;
}
