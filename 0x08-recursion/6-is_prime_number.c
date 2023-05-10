#include "main.h"

int actual_prime(int nampa, int ileni);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @nampa: number to evaluate
 *
 * Return: 1 if nampa is a prime number, 0 if not
 */
int is_prime_number(int nampa)
{
	if (nampa <= 1)
		return (0);
	return (actual_prime(nampa, nampa - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @nampa: number to evaluate
 * @ileni: iterator
 *
 * Return: 1 if nampa is prime, 0 if not
 */
int actual_prime(int nampa, int ileni)
{
	if (ileni == 1)
		return (1);
	if (nampa % ileni == 0 && ileni > 0)
		return (0);
	return (actual_prime(nampa, ileni - 1));
}
