struct notas
{
  long RA;
  float nota;
} cad[5];

int i;
float aux;
        :
        :
for(i = 0; i< 4; i++)
        {
          printf("Digite o RA: ");
          scanf("ld", &cad[i].RA);
          printf("\nDigite Nota: ");
          scanf("f", &aux);
          cad[i].nota = aux;
        }