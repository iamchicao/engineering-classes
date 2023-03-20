// Este código em linguagem C mede o tempo gasto pelo usuário para inserir um número através da
// função "ftime" da biblioteca "sys/timeb.h". A função "ftime" é usada para obter o tempo atual com precisão
// de milissegundos.
//
// A estrutura "timeb" é utilizada para armazenar o tempo medido antes e depois da entrada do número pelo usuário.
// Esta estrutura contém dois campos: "time" que armazena o número de segundos desde a meia-noite (00:00:00),
// 1º de janeiro de 1970, e "millitm" que armazena o número de milissegundos que se passaram desde o último segundo.
//
// O programa começa declarando duas variáveis do tipo "timeb", uma chamada "inic" e outra chamada "fim".
// Em seguida, a função "ftime" é chamada duas vezes: uma vez antes da entrada do número pelo usuário, armazenando
// o tempo em "inic", e outra depois da entrada do número, armazenando o tempo em "fim".
//
// Depois de obter o tempo inicial e final, o programa calcula a diferença entre eles em milissegundos e armazena o
// resultado na variável "dif". O cálculo é feito subtraindo o tempo inicial do tempo final e multiplicando o
// resultado por 1000 (para converter de segundos para milissegundos). Em seguida, é adicionado o número de milissegundos
// decorridos entre as duas chamadas da função "ftime".
//
// Por fim, o tempo gasto para inserir o número pelo usuário é exibido na tela em milissegundos
// através da função "printf".

#include <stdio.h>
#include <sys/timeb.h>

int main(void)
{
  struct timeb inic, fim; // estrutura do time b
  int numero, dif;

  printf("Digite um número: ");

  ftime(&inic); // Tempo atual
  scanf("%d", &numero);
  ftime(&fim); // Tempo atual

  dif = (int)(1000 * (fim.time - inic.time) + (fim.millitm - inic.millitm)); // Calculo em 'ms'
  printf("Tempo gasto: %d ms \n", dif);

  return 0;
}