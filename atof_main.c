// K&R 4.2 atof: converts argv[1] string to float
// compile gcc main.c atof.c -o main.exe
#include <stdio.h>
#include "atof.h"

int main(int argc, char *argv[])
{
	if (!argv[1]) {
		printf("usage: %s arg(float number)", argv[0]);
		return -1;
	}
	printf("%g\n", atof(argv[1]));
	return 0;
}