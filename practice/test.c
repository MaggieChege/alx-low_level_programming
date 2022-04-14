#include <stdio.h>

/**
 * main - Entry Point
 * Descriptions - prints alphabet in lowercase
 * Return: Returns 0 if code executes successfully
 */

int main(void)
{
int i;

i = 0;
while (i < 10)
{
    printf("%d", i % 2);
    i++;
}
return (0);
}
