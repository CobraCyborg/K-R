int main(void)
{
	int n = 0xffff & 0b01111111;
	n = 0x0 | 0b00000111;
	n = 0x0 ^ 0b00000111;
	n = 0b00000111 ^ 0b00000111;
	n = 0b10 << 1;
	n = 0b10 << 2;
	n = ~0x0000ffff;
	return 0;
}