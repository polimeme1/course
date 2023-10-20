#include <stdio.h>

int main() {
	int a = 10000, b = 4, c = 100, d = 5, e = 500, f = 10, h = 50, res;
	res = a / (b * (c / (d * (e / (f * h)))));
	printf("the result is %d\n", res);
	return 0;
}
