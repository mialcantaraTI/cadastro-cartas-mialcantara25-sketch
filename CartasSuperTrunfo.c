#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Pais;

int main() {
    Pais p1, p2;

    // Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Nome do País: \n ");//Lê a string com espaços
    scanf(" %[^\n]s", p1.nome); 

    printf("População: \n ");//Lê a string com espaços
    scanf(" %[^\n]f", &p1.populacao);

    printf("Área (km²): \n ");//Lê a string com espaços
    scanf(" %[^\n]e", &p1.area);

    printf("PIB (bilhões): \n ");//Lê a string com espaços
    scanf(" %[^\n]f", &p1.pib);

    printf("Número de pontos turísticos: \n ");//Lê a string com espaços
    scanf(" %[^\n]s", &p1.pontos_turisticos);

    printf("\n");

    // Cadastro da Carta 2
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Nome do País: \n ");//Lê a string com espaços
    scanf(" %[^\n]s", p2.nome); 
    
    printf("População: \n");//Lê a string com espaços
    scanf(" %[^\n]f", &p2.populacao);

    printf("Área (km²): \n ");//Lê a string com espaços
    scanf("%[^\n]e", &p2.area);

    printf("PIB (bilhões): \n ");//Lê a string com espaços
    scanf(" %[^\n]e", &p2.pib);

    printf("Número de pontos turísticos: \n");//Lê a string com espaços
    scanf(" %[^\n]s", &p2.pontos_turisticos);

   
    



return 0;
} 
