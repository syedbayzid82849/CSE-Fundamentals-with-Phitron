#include <stdio.h>

int fact(int N) {
    if (N == 1)
        return 1;
    int mul = fact(N - 1);
    return N * mul;
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", fact(N));
    return 0;
}