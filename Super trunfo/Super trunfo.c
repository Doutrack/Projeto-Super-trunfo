#include <stdio.h>

int main() {

    // Carta 1
    char Estado1[50];
    char Codigo1[50];
    char cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    unsigned long int pontosTuristicos1;
    float Densidade1;
    float Pibper1;
    float superPoder1;

    // Carta 2
    char Estado2[50];
    char Codigo2[50];
    char cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    unsigned long int pontosTuristicos2;
    float Densidade2;
    float Pibper2;
    float superPoder2;

    printf("Digite o estado\n");
    scanf("%s", Estado1);

    printf("Digite o codigo\n");
    scanf("%s", Codigo1);

    printf("Digite a cidade\n");
    scanf("%s", cidade1);

    printf("Digite a população\n");
    scanf("%lu", &Populacao1);

    printf("Digite a area\n");
    scanf("%f", &Area1);

    printf("Digite o PIB\n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontosTuristicos1);

    Densidade1 = (Populacao1 / Area1);

    Pibper1 = (PIB1 / Populacao1);

    superPoder1 = Populacao1 + Area1 + PIB1 + pontosTuristicos1 + Pibper1 + (Densidade1/Area1);

    printf("Carta 1\n Estado: %s\n  Codigo: %s\n  Cidade: %s\n  População: %lu\n  Area: %.2f\n  PIB: %f\n  Pontos turisticos: %d\n  densidade: %f\n  Pibper: %f\n  Super Poder: %.2f", Estado1, Codigo1, cidade1, Populacao1, Area1, PIB1, pontosTuristicos1, Densidade1, Pibper1, superPoder1);

    printf("Digite o estado\n");
    scanf("%s", Estado2);

    printf("Digite o codigo\n");
    scanf("%s", Codigo2);

    printf("Digite a cidade\n");
    scanf("%s", cidade2);

    printf("Digite a população\n");
    scanf("%lu", &Populacao2);

    printf("Digite a area\n");
    scanf("%f", &Area2);

    printf("Digite o PIB\n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontosTuristicos2);

    Densidade2 = (Populacao2 / Area2);

    Pibper2 = (PIB2 / Populacao2);

    printf("Carta 2\n Estado: %s\n  Codigo: %s\n  Cidade: %s\n  População: %lu\n  Area: %.2f\n  PIB: %f\n  Pontos turisticos: %d\n  densidade: %f\n  Pibper: %f\n", Estado2, Codigo2, cidade2, Populacao2, Area2, PIB2, pontosTuristicos2, Densidade2, Pibper2);
    

    return 0;
   
}

