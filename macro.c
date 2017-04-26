#include <stdio.h>
#define dprint(exp, type) printf(#exp " - %" #type "\n", exp); // macros


int main(int argc, char const *argv[])
{
	char x = 0x41;
	x += 1;
	dprint(x, c);
	return 0;
}