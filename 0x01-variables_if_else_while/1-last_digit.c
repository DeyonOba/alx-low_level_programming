#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Get last digit.
 *
 * Description: Get last digit, check if digit is greater than 5, equals to
 * 5 and greater than 0, and finally it's equal to 0.
 * Return: 0 (Success)
 */
int main(void)
{
	int n, remain;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	remain = n % 10;
	if (remain > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, remain);
	}
	else if (remain <= 5 && remain != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, remain);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, remain);
	}
	return (0);
}
