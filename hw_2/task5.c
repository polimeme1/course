#include <stdio.h>

int main() {
	int a = 45, b = 5561;
	a += b;
	b = a - b;
	a -= b;
	printf("%d %d (was %d %d)\n", a, b, b, a);
	return 0;
}
