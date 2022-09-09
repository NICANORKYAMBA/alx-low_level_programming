#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int ch;

	for (ch = 122; ch > 96; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
