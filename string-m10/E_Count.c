#include <stdio.h>
int main() {
    char s[1000001];
    fgets(s, 1000001, stdin);
    int length = strlen(s);
    printf("%d", length);
    return 0;
}