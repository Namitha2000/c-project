#include <stdio.h>

void biggest3() {
    int a = 2, b = 22, c = 10;

    if (a >= b) {
        if (a >= c)
            printf("%d is the largest number.\n", a);
        else
            printf("%d is the largest number.\n", c);
    } else {
        if (b >= c)
            printf("%d is the largest number.\n", b);
        else
            printf("%d is the largest number.\n", c);
    }
}



