#include "main.h"

/**
 * putts - print string
 * @c: string
 * Return: number opf byte
*/

int putts(char *c)
{
	int num = 0;

	if (c)
	{
		for (num = 0; c[num] != '\0'; num++)
		{
			putcharr(c[num]);
		}
	}
	return (num);
}
