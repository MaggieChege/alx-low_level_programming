#include <stdio.h>
/**
 * main - Entry Point
 * Descriptions - prints alphabet in lowercase then uppercase
 * Return: Returns 0 if code executes successfully
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}
