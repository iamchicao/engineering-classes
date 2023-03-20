#include <stdio.h>
#include <stdlib.h>

struct tipo_no
{
  int num;
  struct tipo_no *prox;
};

int main()
{
  int varLocal = 0;
  struct tipo_no *prim, *nova;
  prim = NULL;

  while (varLocal >= 0)
  {

    if (!(nova = malloc(sizeof(struct tipo_no))))
    {
      printf("Faltou Memória! \n");
      return 1;
    }
    printf("Digite um valor: ");
    scanf("%d", &(nova->num));
    varLocal = nova->num; // Variavel verificando o While
    if (varLocal < 0)
    {
      break; // Sai do loop quando for menor que 0
    }
    // Inserir novo nó na lista ligada
    nova->prox = prim; // Neste ponto o novo Nó recebe o endereço do endereço atual.
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