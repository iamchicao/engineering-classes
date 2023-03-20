// Este código em linguagem C utiliza uma estrutura ("struct") chamada "aluno" para armazenar informações sobre 
// os alunos, incluindo o RA (Registro Acadêmico) e a nota.
#include <stdio.h>

struct aluno 
{
	int ra;
	float nota;
};

void carregar(struct aluno parametro[], int tamanho);
void mostrar(struct aluno parametro[], int tamanho);

// A função "main" declara um vetor de estruturas "aluno" chamado "vet" com tamanho 6 e, em seguida, 
// chama a função "carregar" para preencher os valores do vetor. Em seguida, a função "mostrar" é chamada para 
// imprimir os valores de cada aluno.
int main(void) 
{
	struct aluno vet[6];
	carregar(vet, 6);
	mostrar(vet, 6);
	return 0;
}

// A função "mostrar" recebe como parâmetro um vetor de estruturas "aluno" e o tamanho do vetor. 
// Ela usa um loop "for" para percorrer cada elemento do vetor e imprimir o valor do RA e da nota de cada aluno,
// usando a notação de ponto para acessar os membros da estrutura.
void mostrar(struct aluno parametro[], int tamanho) 
{
	int pos;
	
	for(pos = 0; pos < tamanho; pos++){
		printf("RA: %d\n", parametro[pos].ra);
		printf("Nota: %f\n", parametro[pos].nota);
	}
}

// A função "carregar" também recebe como parâmetro um vetor de estruturas "aluno" e o tamanho do vetor.
// Ela usa um loop "for" para percorrer cada elemento do vetor e solicitar ao usuário que digite o valor do RA e 
// da nota para cada aluno usando a função "scanf", novamente usando a notação de ponto para acessar os membros da estrutura.
void carregar(struct aluno parametro[], int tamanho) {
	int pos;
	
	for(pos = 0; pos < tamanho; pos++)
    {
		printf("Digite o RA: %d\n", pos+1);
		scanf("%d", &parametro[pos].ra);
		printf("Digite a nota: %i\n", pos+1 );
		scanf("%f", &parametro[pos].nota);
	}
}