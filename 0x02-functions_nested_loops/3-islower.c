#include "main.h"

/**
 * _islower - Shows 1 if input is a
 * lowercase character, Anyother cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

	c = _islower('H');
	_putchar(c + '0');
	c = _islower('o');
	_putchar(c + '0');
	c = _islower(108);
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}
