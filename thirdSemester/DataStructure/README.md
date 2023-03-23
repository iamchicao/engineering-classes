https://www.cs.usfca.edu/~galles/visualization/Algorithms.html

TAD - Os tipos abstratos de dados são uma abstração construído sobre dados comuns. E podemos usar os TAD's para construir estruturas de mais alto nível de abstração.
Um exemplo de TAD é a estrutura que usamos para criar nossas listas ligadas. Por exemplo a estrutura 'tipo_no' definida a seguir é o TAD que será usado para criar cada um dos nós da nossa lista ligada. Nossa lista ligada tera um apontador especial chamado "HEAD" que aponta para o primeiro elemento da lista e cada elemento tem dentro de si uma apontador para o próximo elemento é o último elemento que aponta para NULL.

Exemplo:

struct tipo_no {
int num;
struct tipo_no \*prox;
};

int main(void) {
struct tipo_no _head, _ novo;
}

head -> [3|] -> [2| ] -> [1 | ]
