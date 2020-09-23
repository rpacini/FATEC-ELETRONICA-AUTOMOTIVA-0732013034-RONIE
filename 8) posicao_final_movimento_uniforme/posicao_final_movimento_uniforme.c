/* Calcular a posição final de um móvel em um certo tempo de um corpo em movimento uniforme*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {

float e_posicao_inicial,  e_velocidade, e_tempo, s_posicao_final;

printf("Digite a posição incial do corpo em m:\n");
scanf("%f", &e_posicao_inicial);

printf("Digite a velocidade do corpo em m/s:\n");
scanf("%f", &e_velocidade);

printf("Digite o tempo do corpo em s:\n");
scanf("%f", &e_tempo);

s_posicao_final = e_posicao_inicial + (e_tempo * e_velocidade);
printf("A posição final do corpo é: %.2f", s_posicao_final);
printf(" m\n");

  return 0;
}