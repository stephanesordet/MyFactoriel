#include <stdio.h>
#include <stdlib.h>

int factorial(int f) {
    int total = f;
    if (f == 1){
        return 1;
    }
        return (f * factorial((f-1)));


}
//Commentaire pour nouvelle branche
int main()
{
    int fact=4;
    int total=fact;
    for (int i=fact-1;i>0;i--) {
    total = total * i;
    }
    printf("%d! = %d \n", fact, factorial(fact));
    return 0;
}
