#include <stdio.h>

void swap_endian(int *x) {
	unsigned int tmp = 0;
	unsigned char * c = (unsigned char *)x;
	// 맨 앞, 맨 뒤 교체
	tmp = *c;
	*c = *(c + 3);
	*(c + 3) = tmp;
	// 2번째, 3번째 교체 
	tmp = *(c + 1);
	*(c + 1) = *(c + 2);
	*(c + 2) = tmp;
}

int main() {
	int x = 0x12345678;

	printf("%x\n", x);
	swap_endian(&x);
	printf("%x\n", x);

	return 0;
}

	
