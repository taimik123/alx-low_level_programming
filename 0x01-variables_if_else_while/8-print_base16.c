#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;
	int letter = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (letter <= 102)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
