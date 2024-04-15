#include <stdio.h>
int main() {

    int NUM1, NUM2, NUM3;

    printf("Enter two integers: ");
    scanf("%d %d", &NUM1, &NUM2);

    // calculate the sum
    NUM3 = NUM1 + NUM2;

    printf("%d + %d = %d", NUM1, NUM2, NUM3);
    return 0;
}
