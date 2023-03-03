#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char leet[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	/* indices:      0   1   2   3   4   5   6   7 */

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (s[i] == 'a' || s[i] == 'A')
				s[i] = '4';
			else if (s[i] == 'e' || s[i] == 'E')
				s[i] = '3';
			else if (s[i] == 'o' || s[i] == 'O')
				s[i] = '0';
			else if (s[i] == 't' || s[i] == 'T')
				s[i] = '7';
			else if (s[i] == 'l' || s[i] == 'L')
				s[i] = '1';
			else if (s[i] == leet[j] || s[i] == leet[j] + 32)
				s[i] = j + '0';
		}
	}
	return (s);
}
