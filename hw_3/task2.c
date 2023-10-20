#include <stdio.h>

int main() {
    int a = -2140000365;
    printf("conversion of negative int to unsigned long long int: %llu (was %d)\n", (unsigned long long) a, a);
    return 0;
}
