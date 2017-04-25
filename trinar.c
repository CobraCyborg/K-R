#include <stdio.h>
int main(void)
{
	int s;
	int r = 20;
	int m[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
		11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	for (s = 0; s < r; s++)
		printf("%6d%c", m[s], (s%10 == 9 || s == r-1) ? '\n' : ' ');
	return 0;
}