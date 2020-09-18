#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
	int LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10;

	printf("Last digit of %i is %i and", n, LastDigit);
	if (LastDigit > 5) {
		printf("is greater than 5\n");
	} else if (LastDigit == 0) {
		printf("is 0\n");
	} else {
		printf("is less than 6 and not 0\n");
	}
	return (0);
}
