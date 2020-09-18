#include <stdio.h>
/**
* main - print the alphabet in lower and uppercase
* Return: 0
*/
int main(void)
{
	char a;
	char z;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (z = 'A'; z <= 'Z'; z++)
		putchar(z);
	putchar('\n');
	return (0);
}
