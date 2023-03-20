#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float Somar (float a, float b)
{
	return a + b;
}

float Subtrair (float a, float b)
{
	return a - b;
}

float Multiplicar (float a, float b)
{
	return a * b;
}

float Dividir (float a, float b)
{
	if (b != 0)
	{
		return a/b;
	}
	else
	{
		printf("Erro!! O segundo número não pode ser 0 (zero).");
		return 0;
	}
}

void main()
{
	char operacao;
	float a, b;
	char frase[100];
	FILE *file;
	
	file = fopen("historico.txt", "r");
	
	printf("Operações Matemáticas");
	printf("\n+ : Adicão");
	printf("\n- : Subtração");
	printf("\n* : Multiplicação");
	printf("\n/ : Divisão");
	printf("\nF : Finaliza o programa");
	printf("\nM : Salvar em memória");
	printf("\nR : Mostrar conteúdo salvo em memória");
	
	do
	{
		printf("\nEscolha a operação que deseja: ");	
		scanf("%c", operacao);
		
		printf("\nDigite o primeiro numero: ");
		scanf("%f", &a);
		
		printf("\nDigite o segundo numero: ");
		scanf("%f", &b);
		
		if (strcmp(operacao, "+"))
		{
			printf("SOMA = %.2f", Somar(a, b));
		}
		else if (strcmp(operacao, "-"))
		{
			printf("SUBTRACAO = %.2f", Subtrair(a, b));
		}
		else if (strcmp(operacao, "*"))
		{
			printf("MULTIPLICACAO = %.2f", Multiplicar(a, b));
		}
		else if (strcmp(operacao, "/"))
		{
		    if (Dividir(a, b) != 0)
		    {
		        printf("DIVISAO = %.2f", Dividir(a, b));
		    }
		}
		else if (strcmp(operacao, "F"))
		{
			printf("Finalizando programa!!");
			break;
		}
		else if (strcmp(operacao, "M"))
		{
			fputs("Operacao salva.", file);
		}
		else if (strcmp(operacao, "R"))
		{
			if (file != NULL)
			{
				while(fgets(frase, 100, file) != NULL) 
				{
					printf("%s", frase);
				}
			}
		}
		else {}
		
	} while (operacao == 'F');
	
	fclose(file);
}