#include <stdio.h>

int main() {
    
    char estado1[] = "RJ";
    char cidade1[] = "Rio de Janeiro";
    unsigned long int populacao1 = 6700000;
    float area1 = 1200.3;
    float pib1 = 400.5;
    int pontos_turisticos1 = 15;

    char estado2[] = "SP";
    char cidade2[] = "São Paulo";
    unsigned long int populacao2 = 12000000;
    float area2 = 1521.1;
    float pib2 = 700.8;
    int pontos_turisticos2 = 25;

    
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = pib1 * 1000000000 / populacao1; // PIB em bilhões
    float pib_per_capita2 = pib2 * 1000000000 / populacao2;

    
    float super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    float super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    
    printf("=== Carta 1 ===\nEstado: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n\n",
           estado1, cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade1, pib_per_capita1, super_poder1);

    printf("=== Carta 2 ===\nEstado: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n\n",
           estado2, cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade2, pib_per_capita2, super_poder2);

    
    printf("Comparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

    return 0;
}
