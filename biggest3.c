#include <stdio.h>

void biggest3() {
    int a = 10, b = 20, c = 30 ;

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



