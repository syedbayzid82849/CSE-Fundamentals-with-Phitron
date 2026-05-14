#include <stdio.h>

void rec(int N)
{
    if (N == 0) {
        return;
    }
    int last = N % 10;
    int priv_num = N / 10;
    rec(priv_num);
    printf("%d ", last);
}

int main()
{
    int N;
    scanf("%d", &N);
    rec(N);
    return 0;
}