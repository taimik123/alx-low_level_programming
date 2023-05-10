#include "main.h"

/**
 * wildcmp - Compare strings
 * @str_one: pointer to string params
 * @str_two: pointer to string params
 * Return: 0
 */

int wildcmp(char *str_one, char *str_two)
{
	if (*str_one == '\0')
	{
		if (*str_two != '\0' && *str_two == '*')
		{
			return (wildcmp(str_one, str_two + 1));
		}
		return (*str_two == '\0');
	}

	if (*str_two == '*')
	{
		return (wildcmp(str_one + 1, str_two) || wildcmp(str_one, str_two + 1));
	}
	else if (*str_one == *str_two)
	{
		return (wildcmp(str_one + 1, str_two + 1));
	}
	return (0);
}
