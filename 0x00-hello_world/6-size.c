#include <stdio.h>
/**
 * main - print the sizes about the diferents data types
 * Description: Print sizes of a char, int, long, long long, float
 * return: 0
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
} 
