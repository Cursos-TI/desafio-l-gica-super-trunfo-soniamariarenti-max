#include <stdio.h> 

  main(){

    char estado1[] = "RJ";
    char cidade1[] = "Rio de Janeiro";
      int populacao1 =  6700000;
      float area1 = 1200.3;
      float pib1 = 400.5;


      char estado2[] = "SP";
      char cidade2[] = "São Paulo";
       int populacao2 = 12000000;
       float area2 = 1521.1;
       float pib2 = 700.8;

      printf(" === carta 1 ===\n");
      printf("Estado: %s\ncidade: %s\npopulacao: %d\narea: %.2f km²\nPIB: %.2f bilhões\n\n",estado1, cidade1,populacao1, area1, pib1);

      printf(" === carta 2 ===\n");
      printf("Estado: %s\ncidade: %s\npopulacao: %d\narea: %.2f km²\nPIB: %.2f bilhões\n\n",estado2, cidade2,populacao2, area2, pib2);

      printf("comparando pela populacao...\n");
      if(populacao1 > populacao2) {
          printf("vencedora:  %s (%s)\n", cidade1, estado1);
      } else if (populacao2 > populacao1) {
          printf("vencedora: %s (%s)\n", cidade2, estado2);
      } else {
          printf("empate!\n");
      }
     
      return 0;
}
