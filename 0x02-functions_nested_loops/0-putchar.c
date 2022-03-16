#include "stdio.h"

/**
 * main - entry point.
 * Description: program starts and ends here.
 * Return: 0 (Success)
 */
int main(void)
{
	char text[7] = "Putchar";
		int i;

		for (i = 0; i < 9; i++)
		{
			_putchar(text[i]);
		}
		_putchar('\n');
		return (0);
}
