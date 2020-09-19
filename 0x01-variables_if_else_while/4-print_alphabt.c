#include <stdio.h>
/**
* main - print the alphabet except e and q
* Return: 0
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'e' && a != 'q')
			putchar(a);
	putchar('\n');
	return (0);
}
