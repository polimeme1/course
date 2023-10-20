#include <stdio.h>

int main() {
	int k = 14398, h, m, s;
	h = (k / 3600) % 24;
	m = (k % 3600) / 60;
	s = (k % 3600) - m * 60;
	printf("the time is %d:%d:%d\n", h, m, s);
	return 0;
}
