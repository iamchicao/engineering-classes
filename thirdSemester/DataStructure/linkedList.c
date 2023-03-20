#include <stdio.h>
#include <stdlib.h>

struct tipo_no
{
  int num;
  struct tipo_no *prox;
};

int main()
{
  int pos;
  struct tipo_no *prim, *nova;
  prim = NULL;

  for (pos = 0; pos < 5; pos++)
  {
    if (!(nova = malloc(sizeof(struct tipo_no))))
    {
      printf("Faltou Memória! \n");
      return 1;
    }
    printf("Digite um valor: ");
    scanf("%d", &(nova->num));
    nova->prox = prim; // Inserir novo nó na lista ligada
    prim = nova;
  }

  nova = prim;
  while (nova != NULL)
  {
    printf("Valor: %d \n", nova->num);
    nova = nova->prox;
  }
  return 0;
}