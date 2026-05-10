#include <stdio.h>
void recursive_function(int n)
{
    printf("%d\n", n);      
    recursive_function(n);
}
int main()
{
    recursive_function(5);
    return 0;
}