#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 0;
	while
		(a < 100) {
			putchar(a + '0');
			if (a < 99)
			{
				putchar(',');
				putchar(' ');
			}
			a++;
		}
	putchar('\n');
	return (0);
}
