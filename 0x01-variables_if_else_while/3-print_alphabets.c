#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase then Uppercase.
 *Return: Always 0.
 */

int main(void)
{
	char letter;
	char Alpha;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
	putchar (letter);
	}
	for (Alpha = 'A'; Alpha <= 'Z'; ++Alpha)
	{
	putchar (Alpha);
	}
	putchar('\n');
	return (0);
}
