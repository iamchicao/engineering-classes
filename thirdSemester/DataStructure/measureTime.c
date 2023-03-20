// Este é um programa em linguagem C que gera um vetor com 500.000 elementos preenchidos com números aleatórios 
// e exibe os primeiros 20 elementos do vetor, além de imprimir o tempo necessário para gerar o vetor.
// 
// A função ftime() é usada para obter a hora atual com precisão de milissegundos. A estrutura timeb é usada para 
// armazenar a hora atual e o tempo que leva para gerar o vetor é calculado subtraindo-se o tempo de início do tempo 
// final. Isso é feito usando as variáveis inic e fim.
// 
// O vetor é preenchido com números aleatórios usando a função rand(), que é definida na biblioteca padrão stdlib.h. 
// A função rand() retorna um inteiro aleatório entre 0 e RAND_MAX.
// 
// Em seguida, os primeiros 20 elementos do vetor são exibidos na tela usando um loop for.
// 
// Por fim, o tempo necessário para gerar o vetor é impresso na tela usando a variável dif. 
// A multiplicação por 1000 é feita para converter o tempo em segundos para milissegundos.

#include <stdio.h>
#include <time.h>
#include <sys/timeb.h>
#include <stdlib.h>

int main(void) 
{
	struct timeb inic, fim;
	int pos, tamanho = 500000, dif;
	int vet[tamanho];
	ftime(&inic);
	
	for(pos = 0; pos < tamanho; pos++)
    {
		vet[pos] = rand();
	}
	
	ftime(&fim);
	dif = (int) (1000 * (fim.time - inic.time)) + (fim.millitm - inic.millitm);
	printf("Tempo: %d ms\n", dif);
	
	for (pos=0; pos < 20; pos++) 
    {
		printf("%d - %d\n", (pos+1),vet[pos]);
	}
	return 0;
}