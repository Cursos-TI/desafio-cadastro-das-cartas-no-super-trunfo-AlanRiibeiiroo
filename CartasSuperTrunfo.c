#include <stdio.h>

int main() {
    
    int PontosTuristicos = 50;
    char Estado[20] = "Ceará";
    char Código[3] = "A01";
    char Cidade[20] = "Fortaleza";
    float População = 190.000;
    float Área = 20.000;
    float PIB = 30.000;

    
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Código);
    printf("Cidade: %s\n", Cidade);
    printf("População: %.3f Habitantes\n", População);
    printf("Área: %.3f Quilômetros²\n", Área);
    printf("PIB: %.3f PIB\n", PIB);
    printf("PontosTuristicos: %d Pontos\n", PontosTuristicos);


    return 0;
}