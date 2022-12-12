#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
* main - prints a random interger and states whether zero or not
* n: The random interger
*
* Description: A random value is assigned to n
* The conditional statements below print the interger and state whether
* the value of n is positive , negative or zero
* Return: 0 indicates successful execution
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%i is zero\n", n);


	return (0);

}
