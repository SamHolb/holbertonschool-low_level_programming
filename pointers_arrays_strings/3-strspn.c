#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s that
 * consists of only characters found in accept.
 * @s: The input string.
 * @accept: The string containing the characters to match.
 * Return: The length of the initial segment of s consisting of characters in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, n, value;

    value = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
    for (n = 0; accept[n] != '\0'; n++)
    {
    if (accept[n] == s[i])
    {
    value++;
    break; /* You can add a break here to exit the inner loop once a match is found*/
    }
    }
    }

    return value; 
}
