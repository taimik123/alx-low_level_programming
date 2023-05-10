#include "main.h"

/**
 * _pow_recursion - returns the value of xar raised to the power of yar
 * @xar: value to raise
 * @yar: power
 *
 * Return: result of the power
 */
int _pow_recursion(int xar, int yar)
{
	if (yar < 0)
		return (-1);
	if (yar == 0)
		return (1);
	return (xar * _pow_recursion(xar, yar - 1));
}
