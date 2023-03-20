/*
Os que tiverem nota igual ou maior a 6,0 não precisam fazer a avaliação em 10 de outubro.

1 - Usando sua criatividade, detalhe a proposta e  faça um programa em C, utilizando arquivo, strings e vetores,
que leiam informações da tela, armazene em um arquivo, que leia de algum arquivo e mostre na tela, devendo ser  relacionado a um dos seguintes itens:
  - Uma biblioteca
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  char nomeUsuario[50];
  char nomeLivro[100];
  char nomeLivroEstoque[100];
  int resposta;

  FILE *fileBook;

  fileBook = fopen("estoqueLivros.csv", "r");
  if (fileBook == NULL)
  {
    printf("Arquivo não encontrado");
    return 1;
  }

  printf("Biblioteca! Seja bem-vindo.");

  printf("\nDigite o seu nome: ");
  fgets(nomeUsuario, 50, stdin);

  printf("\nQual livro você deseja?");
  fgets(nomeLivro, 100, stdin);

  while (fscanf(fileBook, "%[^]", nomeLivroEstoque) != EOF)
  {
    if (strcmp(nomeLivroEstoque, nomeLivro))
    {
      printf("Deseja realmente emprestar o livro? \n(1 - Sim | 0 - Nao)");
      scanf("\n%i", &resposta);

      if (resposta == 1)
      {
        escrevaArquivo(nomeLivro);
      }
      else
      {
        printf("Operação cancelado!");
      }
    }
    else
    {
      printf("Livro não encontrado, por favor, tente novamente!");
    }

    return 0;
  }

  fclose(fileBook);
  return 0;
}

void escrevaArquivo(char nomeLivro[100])
{
  FILE *fp;
  if ((fp = fopen("historicoEmprestimo.txt", "a+")) != NULL)
  {
    fputs(nomeLivro, fp);
    printf("\nSalvo no histórico de empréstimos! Boa leitura :)\n");
  }
  else
  {
    printf("Não foi possível abrir o arquivo");
  }
  system("pause");
}