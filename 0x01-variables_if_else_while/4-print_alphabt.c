#include <stdio.h>
#include <stdilib.h>
#include <string.h>
/**
*main - Print alphabet without q and e
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
