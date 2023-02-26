/*
//QUESTÃO 1:
//Linguagem C
#include <stdio.h>

int main(void) {
int INDICE = 13, SOMA = 0, K = 0;

do
{
K = K + 1;
SOMA = SOMA + K;
}while (K < INDICE);

printf("SOMA: %d", SOMA);
  return 0;
}
*/

/*
//QUESTÃO 2:
//Linguagem C
#include <stdio.h>

int main() {
    int num, fib1 = 0, fib2 = 1, proximo = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    while (proximo < num) {
        proximo = fib1 + fib2;
        fib1 = fib2;
        fib2 = proximo;
    }
    if (proximo == num) {
        printf("%d Pertence a sequência de Fibonacci.\n", num);
    } else {
        printf("%d Não pertence a sequência de Fibonacci.\n", num);
    }
    return 0;
}
*/

/*
//QUESTÃO 4: 
//Linguagem C
#include <stdio.h>

int main() {
  float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;
  float total = sp + rj + mg + es + outros;

  printf("Percentual de representação de cada estado no faturamento mensal:\n\n");
  printf("SP: %.2f%%\n", (sp / total) * 100);
  printf("RJ: %.2f%%\n", (rj / total) * 100);
  printf("MG: %.2f%%\n", (mg / total) * 100);
  printf("ES: %.2f%%\n", (es / total) * 100);
  printf("Outros: %.2f%%\n", (outros / total) * 100);

  return 0;
}
*/

/*
//QUESTÃO 5:
//Linguagem C

#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    printf("\nDigite uma string: ");
    fgets(string, 100, stdin);

    int i = 0, j = strlen(string) - 1;
    while (i < j) {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        i++;
        j--;
    }
    printf("\nString invertida: %s", string);

    return 0;
}
*/