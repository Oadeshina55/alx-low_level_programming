#include "main.h"

/**
 * _atoi - Coovert a string to an integer
 * @s: The pointer to convert
 *
 * Return: The integer value of the string.
 */

int _atoi(char *s)

{
	int sign = 1, num = 0, started = 0;

	while (*s)
	{
	if (*s == '-' && !started)
		sign *= -1;
	else if (*s == '+' && !started)
		sign *= 1;
	else if (*s >= '0' && *s <= '9')
	{
		started = 1;
		num = (num * 10) + (*s - '0');

		if (num > 0 && *(s + 1) < '0')
			break;
	}
	else if (started)
		break;

	s++;
	}

	return (num * sign);
}
