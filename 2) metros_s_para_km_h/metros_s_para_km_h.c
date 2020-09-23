/* Conversão de metros por segundo para kilometros por hora */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float e_metros_segundo, s_kilometros_hora;

    printf("Digite o valor em metros por segundo:\n");
    scanf("%f", &e_metros_segundo);  
  
    s_kilometros_hora = (e_metros_segundo * 3.6);

    printf("O valor é : %.2f", s_kilometros_hora);
    printf(" Km/h\n");
  
  return 0;
}