#include <stdio.h>

void carregar(int parametro[], int tamanho);
void mostrar (int parametro[], int tamanho);

int main(void) 
{
	int vet[6];
	carregar (vet, 6);
	mostrar (vet, 6);
	return 0;
}

// A função "mostrar" é responsável por imprimir na tela os valores do vetor. 
// Ela usa um loop "for" para percorrer todos os elementos do vetor e imprime 
// o valor de cada elemento usando a função "printf".
void mostrar(int parametro[], int tamanho) 
{
	int pos;
	for(pos = 0; pos < tamanho; pos++) 
    {
		printf("valor: %d\n", parametro[pos]);
	}
}

// A função "carregar" é responsável por carregar valores para o vetor. 
// Ela também usa um loop "for" para percorrer cada posição do vetor e, em seguida, 
// solicita ao usuário para digitar um valor para essa posição usando a função "scanf".
void carregar (int parametro[], int tamanho) 
{
	int pos;
	for(pos = 0; pos < tamanho; pos++) 
    {
		printf("valor [%d]:", pos + 1);
		scanf("%d", &parametro[pos]);
	}
}