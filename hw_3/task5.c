#include <stdio.h>
#include <float.h>

int main() {
        double d = DBL_MAX;
        printf("max double: %f\n", d);
        d += DBL_MAX / 2;
        printf("max double overflow: %f\n", d);
        return 0;
}
