#include <stdio.h>
int main () {
    int idade;
    int matricula;
    float altura;
    char nome[20];

    printf(" Digite sua idade\n", idade);
    scanf(" %d", &idade);

    printf("Digite sua matricula\n", matricula);
    scanf("%d", &matricula);

    printf("Digite sua altura\n", altura);
    scanf("%f", &altura);

    printf("Digite seu nome\n", nome);
    scanf("%s, &nome");

    printf("Nome %s - Idade %d - Matricula %d - Altura %f", nome, idade, matricula, altura);

    return 0;

}