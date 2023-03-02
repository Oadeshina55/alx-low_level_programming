#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print a string in reverse
 * @s: Te string to print
 * Return: void
 */

void print_rev(char *S)

{
	int C = 0;

	while (S[C] != '\0')
	{
	C++;
        }
	
	for (C -= 1; C >= 0; C--)
	{
	_putchar(S[C]);
	}
	_putchar('\n');
}
