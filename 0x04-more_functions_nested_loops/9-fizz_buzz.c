#include <stdio.h>
/**
* main - marks entry point
*
* Return:0 (success)
*/
int main(void)
{
	int a;

	a = 1;
	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
		a++;
	}
	printf("\n");
return (0);
}
