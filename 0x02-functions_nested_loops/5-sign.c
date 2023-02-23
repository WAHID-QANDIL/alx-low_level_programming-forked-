#include "main.h"
#include <stdio.h>
/**
 * prints_sign - function that prints signs
 *
 * @n: function parameter
 *
 * Return: 1, 0 and -1
 */

int print_sign(int n);
{
	if (n > 0)
	{
		printf("+, ");
		return (1);
	}
	else if (n == 0)
	{
		printf("0, ");
		return (0);
	}
	else
		printf("-, ");
		return (-1);
	}
}
