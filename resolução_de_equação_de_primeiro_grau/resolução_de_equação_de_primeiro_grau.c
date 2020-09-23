/* resolução_de_equação_de_primeiro_grau */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  float e_termo_ax, e_termo_b, s_resp_x;

    printf(" Digite termo A:\n");
    scanf("%f", &e_termo_ax);

    if (e_termo_ax!=0)
    { 
      printf("Digite o termo B:\n");
      scanf("%f", &e_termo_b);

      s_resp_x= e_termo_b/e_termo_ax;
      printf("Resposta:%.3f\n", s_resp_x);
    }else{
      printf("O número não pode ser igual a zero!\n");

    }  
  
  return 0;
}