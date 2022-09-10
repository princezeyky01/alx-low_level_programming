#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int ch;
		for (ch = 0; ch <10; ch++)
	{
		putchar(48 + ch);
	}
	putchar('\n');
	reurn (0);
}
