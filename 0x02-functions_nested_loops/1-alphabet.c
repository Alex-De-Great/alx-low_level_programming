#include "main.h"
/**
 *print_alphabet - Prints the alphabet in lowercase
 *Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int j;

	for (j = 97; j <= 322; j++)
	{
		_putchar (j);
	}
	_putchar ('\n');
}
