#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char ch;
		for (ch = 'a' ; ch <= 'z' ; ch++)
	{
			if (ch != 'e' && ch != 'q')
		{
				putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
