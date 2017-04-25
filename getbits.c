unsigned getbits(unsigned x, int p, int n);

int main(void)
{
	// getbits(0xff, 4, 3);
	int p = 4;
	int n = 3;
	unsigned x = 0; // = 0xff;
	//x >>= (p - n + 1);
	x = ~ 0;
	x <<= n;
	x = ~ x;
	return 0;
}

// возвращает n бит из x начиная с позиции p
unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p - n + 1)) & ~ (~0 << n);
}