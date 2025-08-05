#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {


    char Estado [20];
    char Código [10];
    char Cidade [30];
    int População;
    float Área;
    float PIB;
    int PontosTurísticos;

    printf("Estado:  \n");
    scanf("%s", &Estado);

    printf("Código:  \n");
    scanf("%s", &Código);

    printf("Cidade:  \n");
    scanf("%s", &Cidade);

    printf("População:  \n");
    scanf("%d", &População);

    printf("Área:  \n");
    scanf("%f", &Área);

    printf("PIB:  \n");
    scanf("%f", &PIB);

    printf("PontosTurísticos:  \n");
    scanf("%d", &PontosTurísticos);

    printf("Estado: %s\n", Estado);
    printf("Carta: %s\n", Código);
    printf("Cidade: %s\n", Cidade);
    printf("População: %f\n", População);
    printf("Área: %s\n", Área);
    printf("PIB: %d\n", PIB);
    printf("PontosTurísticos: %d\n", PontosTurísticos);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
