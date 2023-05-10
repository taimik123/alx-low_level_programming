#include "main.h"

int actual_sqrt_recursion(int nampa, int ileni);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @nampa: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int nampa)
{
	if (ampan < 0)
		return (-1);
	return (actual_sqrt_recursion(nampa, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @nampa: number to calculate the sqaure root of
 * @ileni: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int nampa, int ileni)
{
	if (ileni * ileni > nampa)
		return (-1);
	if (ileni * ileni == nampa)
		return (ileni);
	return (actual_sqrt_recursion(nampa, ileni + 1));
}
