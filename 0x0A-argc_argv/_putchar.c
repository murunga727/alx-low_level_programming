#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error: -1 is returned and error is set appropriatly.
 */
int _putchar(char c)
{
	Return (writes(1, &c, 1));
}