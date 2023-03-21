// Rev.3
// Inserir 5 vari�veis din�micas com a estrutura
// tipo_no e depois mostre os valores digitados pelo usuario

// Funcoes:
// 1 - Mostrar a lista com função
// 2 - Função para novo elemento

#include <stdio.h>
#include <stdlib.h>
struct tipo_no
{
   int num;
   struct tipo_no *prox;
};

void mostrarLista(struct tipo_no *parm);
struct tipo_no *insere_no(struct tipo_no **parm);

int main(void)
{
   int pos;
   struct tipo_no *head, *nova;
   head = NULL;

   /*
      for (pos = 0; pos < 5; pos++)
      {
         nova = insere_no(&head);
         printf("Digite o %d valor: ", pos + 1);
         scanf("%d", &(nova->num));
      }
   */
   // tirar o for, colocar um while ou du while
   //  o usuario agora pode digitar a quantidade que ele desejar, nao somente 5
   // Se o usuario digitar um valor negativo ele para
   while (pos >= 0)
   {
      printf("Digite um valor: ");
      // if para não entrar o número negativo na lista, mas somente indicar parada
      scanf("%d", &pos);
      if (pos >= 0)
      {
         nova = insere_no(&head);
         nova->num = pos;
      }
   }

   // Passeio pela lista ligada
   mostrarLista(head);
   return 0;
}

struct tipo_no *insere_no(struct tipo_no **parm) //** pra forçar
{
   struct tipo_no *aux;
   if (!(aux = malloc(sizeof(struct tipo_no))))
   {
      printf("Falta de memoria! \n");
      exit(-1);
   }
   aux->prox = *parm;
   *parm = aux;
   return aux;
}

void mostrarLista(struct tipo_no *parm)
{
   while (parm != NULL)
   {
      printf("Valor: %d \n", parm->num);
      parm = parm->prox;
   }
}

// tirar o for, colocar um while
//  o usuario agora pode digitar a quantidade que ele desejar, nao somente 5