// identificar_triangulo_equilatero_isoscele_escaleno


#include <stdio.h>
#include <stdlib.h>

int main(void) {

      int e_lado_1_triangulo, e_lado_2_triangulo, e_lado_3_triangulo, s_triangulo_equilatero, s_triangulo_isoscele, s_triangulo_escaleno;

printf("Digite o lado 1 do triângulo em número inteiro:\n");
scanf("%i", &e_lado_1_triangulo);

printf("Digite o lado 2 do triângulo em número inteiro:\n");
scanf("%i", &e_lado_2_triangulo);

printf("Digite o lado 3 do triângulo em número inteiro:\n");
scanf("%i", &e_lado_3_triangulo);


if (e_lado_1_triangulo = e_lado_2_triangulo) {
      if (e_lado_1_triangulo=e_lado_3_triangulo) {
          printf("Triângulo equilátero! %i\n", s_triangulo_equilatero);

      }else{ 
          printf("Triângulo Isóscele! %i\n", s_triangulo_isoscele);

      }

}else{
        if (e_lado_2_triangulo=e_lado_3_triangulo){
        printf("Triângulo Isóscele! %i\n", s_triangulo_isoscele);
        }else{
          printf("Triângulo Escaleno! %i\n", s_triangulo_escaleno);
        }
}

  return 0;
}