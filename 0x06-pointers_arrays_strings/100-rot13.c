#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s : pointer to string params
 * Return: *s
 */

char *rot13(char *s)
{

	int i;
	int j;
	char rot_A[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_B[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == rot_A[j])
			{
				s[i] = rot_B[j];
				break;
			}
		}
	}
	return (s);
}
