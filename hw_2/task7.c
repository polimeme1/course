#include <stdio.h>

int main() {
	int a = 11011;
	int r0 = a % 10;
	a /= 10;
	int r1 = a % 10;
	a /= 10;
        int r2 = a % 10;
        a /= 10;
        int r3 = a % 10;
        a /= 10;
        int r4 = a % 10;
        a /= 10;
        int r5 = a % 10;
        a /= 10;
        int r6 = a % 10;
        a /= 10;
        int r7 = a % 10;
        a /= 10;
        int r8 = a % 10;
        a /= 10;
        int r9 = a % 10;
        a /= 10;

	int res = 0;
	res |= r9;
	res <<= 1;
        res |= r8;
        res <<= 1;
        res |= r7;
        res <<= 1;
        res |= r6;
        res <<= 1;
        res |= r5;
        res <<= 1;
        res |= r4;
        res <<= 1;
        res |= r3;
        res <<= 1;
        res |= r2;
        res <<= 1;
        res |= r1;
        res <<= 1;
        res |= r0;

	printf("%d\n", res);
	return 0;
}
