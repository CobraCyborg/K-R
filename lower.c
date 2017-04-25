#include <stdio.h>
int lower(int c);
int main(void)
{
	char ch;
	ch = getchar();
	putchar(lower(ch));
	return 0;
}

int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 'a' + (c - 'A');
	else
		return c;
}