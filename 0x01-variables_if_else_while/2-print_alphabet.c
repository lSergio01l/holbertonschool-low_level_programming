#include <stdio.h>
/**
* main - prints each letter of the alphabet
* Return: 0
*/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
