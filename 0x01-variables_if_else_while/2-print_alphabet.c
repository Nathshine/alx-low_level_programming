#include <stdio.h>
/**
* main - entry point
* decription - prints alphabets lowercase
* Return: Always 0 (success)
*/
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
