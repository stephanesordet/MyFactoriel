#include <stdio.h>
#include <stdlib.h>

int factorial(int f) {
    if (f == 1) {
        return 1;
    }
    return (f * factorial((f-1)));
}
int main()
{
    int b;
    int fact=4;
    printf("%d! = %d \n", fact, factorial(fact));
    return 0;
}


