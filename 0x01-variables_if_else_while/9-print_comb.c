#include <stdio.h>
/**
 * main - starting point of the program
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}