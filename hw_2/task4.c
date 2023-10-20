#include <stdio.h>

int main() {
	int k = 14381, h, m;
	h = (k / 3600) % 24;
	m = (k % 3600) / 60;
	printf("the time is %d:%d\n", h, m);
	return 0;
}
