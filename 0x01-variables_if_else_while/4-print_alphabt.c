#include <stdio.h>

/**
 * main - Entry point
 * @void: parameter
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if(i == 101 || i == 113)
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar(10);

	return(0);
}

