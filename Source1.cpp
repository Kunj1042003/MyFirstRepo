#include <stdio.h>
int main() {

    int K, U, N;

    printf("Enter two integers: ");
    scanf("%d %d", &K, &U);

    // calculate the sum
    N = K + U;

    printf("%d + %d = %d", K, U, N);
    return 0;
}
