#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		puts("and is greater than 5");
	else if (n % 10 == 0)
		puts("and is 0");
	else
		puts("and is less than 6 and not 0");
	puts("\n");
	return (0);
}
