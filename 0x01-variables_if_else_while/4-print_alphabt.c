#include <stdio.h>
/**
* main - print the alphabet except e and q
* Return: 0
*/
int main(void)
{
	char a = 'a';

	do {
		if (a == 'e' && a == 'q')
			a = a + 1;
			continue;
		putchar(a);
	putchar('\n');
	a++;
	} while (a <= 'z');
	return (0);
}
