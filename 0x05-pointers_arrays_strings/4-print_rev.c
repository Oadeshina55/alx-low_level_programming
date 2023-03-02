#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * Return: void
 */

void print_rev(char *s)

{

int C = 0;

while (s[C] != '\0')
{
C++;
}

for (C -= 1; C >= 0; C--)
{
_putchar(s[C]);
}
_putchar('\n');
}
