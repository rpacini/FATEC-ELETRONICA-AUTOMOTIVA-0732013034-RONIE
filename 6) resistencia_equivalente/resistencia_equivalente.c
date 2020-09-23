/* Calculo de resistência equivalente R1 e R2 */


#include <stdio.h>
#include <stdlib.h>

int main()
{

    float e_resistencia_R1, 
          e_resistencia_R2, 
          s_resistencia_equivalente;

    printf("Entre com o valor de R1:\n");
    scanf("%f", &e_resistencia_R1);

    printf("Entre com o valor de R2:\n");
    scanf("%f", &e_resistencia_R2);

    s_resistencia_equivalente = (e_resistencia_R1 * e_resistencia_R2) / (e_resistencia_R1 + e_resistencia_R2);

    printf("A resistencia equivalente é : %.3f\n", s_resistencia_equivalente);

  return 0;
}