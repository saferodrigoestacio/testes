#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    printf("\n");

    // while
    int num = 0;
    while(num <= 10) {
        printf("num = %d\n", num);
        num++;
    }
    printf("\n");

    // do while
    int num2 = 0;
    do {
        printf("num2 = %d\n", num2);
        num2++;
    } while(num2 <= 10);
    printf("\n");

    // for
    for(int i = 0; i <= 5; i++) {
        printf("i = %d\n", i);
    }
    printf("\n");

    return 0;
}
