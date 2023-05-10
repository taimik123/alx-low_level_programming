#include "main.h"

int check_palindrome(char *strr, int idx, int strLen);
int get_string_Length(char *strr);

/**
 * is_palindrome - checks if a string is a palindrome
 * @strr: string to reverse
 *
 * Return: 1 if it is, 0 if it's not
 */
int is_palindrome(char *strr)
{
	if (*strr == 0)
		return (1);
	return (check_palindrome(strr, 0, get_string_length(strr)));
}

/**
 * get_string_Length - returns the length of a string
 * @strr: string to calculate the length of
 *
 * Return: length of the string
 */
int get_string_Length(char *strr)
{
	if (*strr == '\0')
		return (0);
	return (1 + get_string_Length(strr + 1));
}

/**
 * check_palindrome - checks the characters recursively for palindrome
 * @strr: string to check
 * @idx: iterator
 * @strLen: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *strr, int idx, int strLen)
{
	if (*(strr + idx) != *(strr + strLen - 1))
		return (0);
	if (idx >= strLen)
		return (1);
	return (check_palindrome(strr, idx + 1, strLen - 1));
}
