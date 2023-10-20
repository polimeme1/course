#include <stdio.h>

int main() {
    int a = 12;
    printf("to the left: the result is %d (was %d)\n", a << 1, a);
    printf("to the right: the result is %d (was %d)\n", a >> 1, a);
    return 0;
}
