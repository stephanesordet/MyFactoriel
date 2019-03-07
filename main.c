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


