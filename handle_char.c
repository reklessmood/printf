#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * handle_char - gets the parameter of type char.
 * @argptr: the list of arguments,
 *
 * Return: 1.
 */
int handle_char(va_list argptr)
{
	char c;

	c = va_arg(argptr, int);
	write(1, &c, 1);
	return (1);
}
