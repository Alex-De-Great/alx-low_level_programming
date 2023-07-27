#include "main.h"
/**
 *print_alphabet - Prints the alphabet in lowercase
 *Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar (j);
	}
	_putchar ('\n');
}
