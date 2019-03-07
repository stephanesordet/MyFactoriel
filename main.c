#include <stdio.h>
#include <stdlib.h>

int factorial(int f) {
    int total = f;
    for (int i=f-1;i>0;i--) {
        total = total * i;
    }
    return total;
}
//Commentaire pour nouvelle branche
int main()
{
    int fact=4;
    int total=fact;
    for (int i=f-1;i>0;i--) {
    total = total * i;
    }
    printf("%d! = %d \n", fact, factorial(fact));
    return 0;
}
