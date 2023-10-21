#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @c: the number to be computed
 * Return: Absolute value of number or 0
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_value; /* stocke la valeur absolue */

	abs_value = c * -1; /* tranforme en l'opposé */
	return (abs_value);
	}
	return (c);
}
