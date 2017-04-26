#include <stdio.h>
#define dprint(exp, type) printf(#exp " - %" #type "\n", exp); // macros
#define swap(x, y) { x = x + y; y = x - y; x = x - y;}


int main(int argc, char const *argv[])
{
	char a = 0x41;
	char b = 0x42;
	
	dprint(a, c);
	dprint(b, c);

	swap( a, b)

	dprint(a, c);
	dprint(b, c);
	return 0;
}