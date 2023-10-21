#include "main.h"

/**
 * print_sign -Prints the sign of a number
 * @n: the number to be checked
 * Return: 1 for positive num, -1 for negative num or 0 for anything else
 */

int print_sign(int n)

{
	if (n > 0) /* return 1 and print + */
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0) /* return -1 and print - */
	{
	_putchar(45);
	return (-1);
	}
	else /* return 0 and print 0 */
	{
	_putchar(48);
	return (0);
	}
}
