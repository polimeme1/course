#include <stdio.h>
#include <limits.h>

int a = 2;
int main() { 
	double a = 2;
	double a2 = a * a;
	double a4 = a2 * a2;
        printf("a4 = %f\na10 = %f\n", a4, a4 * a4 * a2);
        return 0;
}
