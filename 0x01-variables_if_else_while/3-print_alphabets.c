#include <stdio.h>
/**
* main - entry points
* description - print upper and lower case alphabets
* Return: Always 0 (success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
