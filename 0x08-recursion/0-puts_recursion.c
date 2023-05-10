#include <stdio.h>

/* Function prototype */
void _puts_recursion(char *str);
int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *str = "Hello, world!";

    _puts_recursion(str);

    return 0;
}

/**
 * _puts_recursion - Function like puts()
 * @str: Input string
 */
void _puts_recursion(char *str)
{
    if (*str)
    {
        _putchar(*str);
        _puts_recursion(str + 1);
    }
    else
    {
        _putchar('\n');
    }
}

/**
 * _putchar - Prints a single character
 * @c: The character to be printed
 *
 * Return: On success, returns the character to be printed.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
    return putchar(c);
}
