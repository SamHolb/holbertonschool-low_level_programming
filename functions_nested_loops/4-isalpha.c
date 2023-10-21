#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * &c: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
/* verifie si caractere min etre 97 et 122 table ascii et maj entre 65 et 90 */
	{
	return (1);
	}
	return (0);
}
