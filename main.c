#include <stdio.h>
#include <stdlib.h>
/** \brief compute the factorial of number f
 *
 * \param f int an integer
 * \param
 * \return int the result of the factoriel
 *
 */

int factorial(int f) {
    int total = f;
    if (f == 1){
        return 1;
    }
<<<<<<< HEAD
    return (f * factorial((f-1)));
}
=======
        return (f * factorial((f-1)));


}
//Commentaire pour nouvelle branche
>>>>>>> feature/recursivity
int main()
{
    int b;
    int fact=4;
    int total=fact;
    for (int i=fact-1;i>0;i--) {
    total = total * i;
    }
    printf("%d! = %d \n", fact, factorial(fact));
    return 0;
}


