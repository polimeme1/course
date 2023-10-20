#include <stdio.h>
#include <limits.h>

int main() {
	unsigned char c = UCHAR_MAX;
	printf("max char: %c (has value of %d)\n", c, (int) c);
	++c;
	printf("max char + 1: %c (has value of %d)\n", c, (int) c);
	return 0;
}
