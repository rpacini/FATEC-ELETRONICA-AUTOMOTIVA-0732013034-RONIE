/* Conversor milimetro polegada */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  float e_milimetros, 
        s_polegada;

  printf("Digite o valor em milimetros: \n");
  scanf("%f", &e_milimetros);

  s_polegada = ((e_milimetros / 25.4) * 128);
     
  printf("O valor em polegada fracionária sem simplificação é : %.0f", s_polegada);
  printf("/128 \n");
  
  return 0;
}