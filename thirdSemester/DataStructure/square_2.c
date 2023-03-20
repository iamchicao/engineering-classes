#include <stdio.h>

int main()
{
    int quantidade, pos, coluna, total;

    printf("Digite a quantidade de asteristicos\n");
    scanf("%i", &quantidade);
    total = quantidade * quantidade;
    
    for (pos=1; pos <= total; pos++)
    {   
        printf("*");
       if((pos % quantidade) == 0)
       {
           printf("\n");
       }
    }    
     return 0;
}