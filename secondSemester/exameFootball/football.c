/*
Um determinado campeonato regional de futebol tem 5 times sendo que todos os times devem jogar entre si.

Utilizando vetor(es) ou matriz(es) proponha uma maneira de armazenar o saldo de gols que cada time teve ao enfrentar cada um dos 4 adversários.

Crie:

a)  uma rotina passando como parâmetro um time e devolva o saldo final de gols do tipo.

b) uma rotina que determine o time com mais vitórias (mais partidas com saldo de gol positivos).

Detalhe sua resposta.

Supondo que os times de cidades participantes sejam: Americana, Campinas, Lorena, Piracicaba e São Paulo.

E os resultados sejam:

Americana 5 x Piracicaba 3   ==> Americana saldo de 2 gols e Piracicaba saldo de -2 gols (negativo)

PIracicaba 1 x São Paulo 1  ==> Piracicaba e São Paulo, nesta partida, saldo de 0.
*/

/*
Empate - Cada time ganha 1 ponto
Derrota - O time perdedor fica com 0 ponto
Vitoria - O time gahador fica com 3 ponto

10 jogos no total

Times:
	- Americana
	- Campinas
	- Lorena
	- Piracicaba
	- São Paulo

Cada time time joga 4 vezes
Definir vitórias, derrotas e empates
Saldo de gols
Time campeão
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	printf("O saldo de gols do São Paulo é: %i", saldoGols("SP")); // Exibi o saldo de gols

	timeVencedor();
	return 0;
}

void timeVencedor()
{
	int saldo_gols = 0;
	char adversario[20];
	int vitoria = 0;

	int vitoriaSP = 0;
	int vitoriaCO = 0;
	int vitoriaPA = 0;
	int vitoriaBR = 0;
	int vitoriaFL = 0;

	FILE *fileSP;
	FILE *fileCO;
	FILE *filePA;
	FILE *fileBR;
	FILE *fileFL;

	fileSP = fopen("sao_paulo.csv", "r");
	fileCO = fopen("corinthians.csv", "r");
	filePA = fopen("palmeiras.csv", "r");
	fileBR = fopen("brasil.csv", "r");
	fileFL = fopen("flamengo.csv", "r");

	while (fscanf(fileSP, "%[^,],%d,%d ", adversario, &saldo_gols, &vitoria) != EOF)
	{
		vitoriaSP += vitoria;
	}
	while (fscanf(fileCO, "%[^,],%d,%d ", adversario, &saldo_gols, &vitoria) != EOF)
	{
		vitoriaCO += vitoria;
	}
	while (fscanf(filePA, "%[^,],%d,%d ", adversario, &saldo_gols, &vitoria) != EOF)
	{
		vitoriaPA += vitoria;
	}
	while (fscanf(fileBR, "%[^,],%d,%d ", adversario, &saldo_gols, &vitoria) != EOF)
	{
		vitoriaBR += vitoria;
	}
	while (fscanf(fileFL, "%[^,],%d,%d ", adversario, &saldo_gols, &vitoria) != EOF)
	{
		vitoriaFL += vitoria;
	}
	// Todo: Fazer verificação pra saber qual é o time vencedor e exibir na tela
}

int saldoGols(char time[2])
{
	FILE *file;
	int saldo_gols = 0;
	char adversario[20];
	int vitoria = 0;

	if (strcmp(time, "SP"))
	{
		file = fopen("sao_paulo.csv", "r");
	}
	else if (strcmp(time, "CO"))
	{
		file = fopen("corinthians.csv", "r");
	}
	else if (strcmp(time, "PA"))
	{
		file = fopen("palmeiras.csv", "r");
	}
	else if (strcmp(time, "BR"))
	{
		file = fopen("brasil.csv", "r");
	}
	else
	{
		file = fopen("flamengo.csv", "r");
	}

	if (file == NULL)
	{
		printf("Erro ao abrir o arquivo");
		return 1;
	}

	while (fscanf(file, "%[^,],%d,%d ", adversario, &saldo_gols, &vitoria) != EOF)
	{
		saldo_gols += saldo_gols;
	}

	return saldo_gols;
}