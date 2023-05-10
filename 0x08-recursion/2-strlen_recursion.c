#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @string: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *string)
{
	int longit = 0;

	if (*string)
	{
		longit++;
		longit += _strlen_recursion(string + 1);
	}

	return (longit);
}
