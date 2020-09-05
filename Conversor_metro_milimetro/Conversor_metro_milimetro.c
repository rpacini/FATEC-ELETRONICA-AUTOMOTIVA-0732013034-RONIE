#include <stdio.h>

int main(void) {
  // Definição de variaveis
  int e_metro, s_milimetro;
  printf("Entre com o valor em metros [m]\n");
  scanf("%d", &e_metro);

  s_milimetro = 1000 * e_metro;

  printf("Ovalor em milimetros é: %d\n", s_milimetro);

  return 0;
}