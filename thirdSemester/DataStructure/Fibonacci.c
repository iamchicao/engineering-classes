#include <stdio.h>
//int fib(int parm);
int main(void)
{
    int num;
    printf("Digite o numero: ");
    scanf("%d", &num);
    printf("Resultado: %d \n", fib(num));
    return 0;
}
int fib(int parm)
{   
    // condição de parada
    if (parm == 2 || parm == 1) // Para a recursão quando os elementos forem os dois primeiros indexes
    {
        return 1;
    }
    return(fib(parm-1) + fib(parm-2)); // Lógica de fibonacci com a recursão
}