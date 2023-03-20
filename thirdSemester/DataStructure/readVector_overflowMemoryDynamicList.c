#include <stdio.h>
#include <stdlib.h>

struct tipo_simples
{
    float num[1000]; 
};
    
int main()
{
    struct tipo_simples *repo;
    int qtd = 0;
    while(1)
    {
        
        if(!(repo = malloc(sizeof(struct tipo_simples))))
        {
            printf("Faltou Memória! \n");
            return -1;
        }
        qtd++;
        printf("Quantidade: %d \n",qtd);
    }
      
     return 0;
}