#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @number: number to return the factorial from
 *
 * Return: factorial of number
 */
int factorial(int number)
{
	if (number < 0)
		return (-1);
	if (number == 0)
		return (1);
	return (number * factorial(number - 1));
}
