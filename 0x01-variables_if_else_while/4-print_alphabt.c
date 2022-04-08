#include <stdio.h>

/**
 * main - Entry Point
 * Descriptions - prints if random number is +ve, -ve or zero
 * Return: Returns 0 if code executes successfully
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar(c);
}
putchar('\n');
return (0);
}
