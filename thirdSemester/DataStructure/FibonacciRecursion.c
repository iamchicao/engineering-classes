// Recursividade
// Fatorial de 5 = 5 * 4 * 3 * 2 * 1
// 

#include <stdio.h>
#include <stdlib.h>

float fat(float parm)
{
    if (parm < 1)
    {
        return -1;
    }
    if (parm == 1)
    {
        return 1;
    }
    return(parm * fat(parm - 1)); // função Recursiva
}

float fat(float parm);
int main()
{
    float num;    
    printf("Digite um valor: ");
    scanf("%f", &num);
    printf("Resultado e: %.2f \n ", fat(num)); // Chamada da função fatorial()
    return 0;
}