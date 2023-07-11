#include <stdio.h>

int main(void)
//usamos & para mostar o endereço de uma variável, e 
// * quando quisermos ir para um endereço específico, e
// p para ponteiro
{
    int n = 50;
    int *p = &n;
    printf("%i\n", *p);
}