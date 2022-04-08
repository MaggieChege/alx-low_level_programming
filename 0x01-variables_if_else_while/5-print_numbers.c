#include <stdio.h>

/**
 * main - Entry Point
 * Descriptions - single digit numbers of base 10 starting from 0
 * Return: Returns 0 if code executes successfully
 */

int main(void)
{
int n;

for (n = 0; n < 10; n++)
putchar(n + '0');
putchar('\n');
return (0);
}
