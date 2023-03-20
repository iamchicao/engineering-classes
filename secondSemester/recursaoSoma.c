#include <stdio.h>

static int resultado = 0; // Variavel global
int soma_pares = 0;
int Soma(int valor) // FUnção
{
  if (valor > 0)
  {
    resultado = resultado + Soma(valor - 1); // Soma recursiviva
    if (valor % 2 == 0)
    {
      soma_pares = soma_pares + valor;
      return soma_pares;
    }
    else
    {
      return 0;
    }
  }
  else
    return resultado; // devolve a soma de valores pares
}

int main()
{
  int numero;
  int totalPar = 0;
  printf("\n Digite um valor: ");
  scanf("%d", &numero);
  totalPar += Soma(numero);
  printf("A soma dos numeros pares entre o numero digitado e 0 = %d", totalPar);
}