#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error,returns -1 and error is set aproppriately.
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
