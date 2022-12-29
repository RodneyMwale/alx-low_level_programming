#include <stdio.h>

/**
 * main - Print out all combinations of triple-digit numbers
 * only the smallest combination is printed
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				if (num1 >= num2)
				continue;
				if (num2 >= num3)
				continue;
				putchar((num1 % 10)  + '0');
				putchar((num2 % 10)  + '0');
				putchar((num3 % 10)  + '0');
				if (num1 == 7 && num2 == 8 && num3 == 9)
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
