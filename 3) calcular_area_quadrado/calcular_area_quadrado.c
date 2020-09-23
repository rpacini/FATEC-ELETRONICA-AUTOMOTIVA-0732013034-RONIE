/* Calcular a área de um quadrado fonecendo dados em mm e exibindo em metros²*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float e_largura, e_altura, s_area;

  printf("Digite a largura em mm:\n");
  scanf("%f", &e_largura);

  printf("Digite a altura em mm: \n");
  scanf("%f", &e_altura);

  s_area = ((e_largura * e_altura) / 1000000);

  printf("O valor da área e: %.5f", s_area);
  printf(" m²\n");

      return 0;
}