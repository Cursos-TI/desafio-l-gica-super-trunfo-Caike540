#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Desafio Super Trunfo!\n");

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1[50], nome1[40], codigo1[30];
    int populacao1, numero1;
    float area1, pib1;

    char estado2[50], nome2[40], codigo2[30];
    int populacao2, numero2;
    float area2, pib2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);

    // (Repita para cada propriedade)

    //Carta 1

    printf("Carta 1\n");

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    //Carta 2

    printf("Carta 2\n");

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    printf("População Carta 1 (%s): %d\n", nome1, populacao1);
    printf("X\n");
    printf("População Carta 2 (%s): %d\n", nome2, populacao2);

    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) vence!\n", nome1);
    } else {
        printf("Carta 2 (%s) vence!\n", nome2);
    }

    return 0;
}