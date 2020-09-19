#include <stdio.h>
/**
* main - print the alphabet in reverse
* Description: print the alphabet in reverse since z to a
* Return_ 0
*/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
