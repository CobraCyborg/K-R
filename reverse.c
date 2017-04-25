#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(void)
{
	char s[] = "1234";
	reverse(s);
	puts(s);
	return 0;
}

void reverse(char s[])
{
	int c, i, j;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}	