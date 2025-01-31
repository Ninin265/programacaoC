#include <stdio.h>
int main () {
    int idade; 
    int matricula;
    float altura;
    char nome[20];

    printf("Digite sua idade\n", idade);
    scanf("%d", &idade);

    printf("Digite sua matricula\n", matricula);
    scanf("%d", &matricula);

    printf("Digite sua Altura\n", altura);
    scanf("%f", &altura);

    printf("Digite seu Nome\n", nome);
    scanf("%s", &nome);

    printf("Nome do Aluno: %s - Idade: %d anos - Matricula: %d - Altura: %f", nome, idade, matricula, altura);
    scanf("%s %d %d %f", &nome, &idade, &matricula, &altura);

    return 0;


}