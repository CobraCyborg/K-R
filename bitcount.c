#include <stdio.h>
// подсчет бит равных единице в x
int main(void)
{
	int b;
	unsigned x = 0b1011;
	for (b = 0; x != 0; x >>= 1)
		if (x & 0b01)
			b++;
	
	printf("%d\n", b);
	return 0;
}