#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @strr: The string to be printed.
 */
void _print_rev_recursion(char *strr)
{
	if (*strr)
	{
		_print_rev_recursion(strr + 1);
		_putchar(*strr);
	}
}
