#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of the number stored in the variable n
 * Description: using the main function
 * this program prints "Last digit is gt 5, is zero, or is lt 6 and not 0"
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

		if (l > 5)
	{
			printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
		else if (l == 0)
	{
			printf("Last digit of %d is %d and is 0\n", n, l);
	}
		else
	{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
