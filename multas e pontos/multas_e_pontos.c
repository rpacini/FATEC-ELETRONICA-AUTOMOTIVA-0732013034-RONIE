// Fluxograma: START : Inicio
#include <stdio.h>

int main(void) {
// Fluxograma: START : Fim

// Fluxograma: Declaracao de variaveis : inicio
    float e_veloc_autom, e_veloc_max_via;
// Fluxograma: Declaracao de variaveis : fim

// Fluxograma: Entrada de dados : inicio
    printf("Entre a veloc. do automovel:\n");
    scanf("%f",&e_veloc_autom);
// Fluxograma: Entrada de dados : Fim

// Fluxograma: Entrada de dados : inicio
    printf("Entre a veloc. da via:\n");
    scanf("%f",&e_veloc_max_via);
// Fluxograma: Entrada de dados : Fim

    // Verificacao e ajuste da velocidade maxima da via
// Fluxograma: Desvio  : Inicio
    if ( e_veloc_max_via > 100.0 ) // Se a condicao: e_veloc_max_via e' maior que 100 ? 
    { // Se sim:
        e_veloc_max_via = 1.07 * e_veloc_max_via;
    }else{ // Senao:
        e_veloc_max_via = e_veloc_max_via + 7;
    }
// Fluxograma: Desvio  : Fim

// Fluxograma: Desvio  : Inicio
    if ( e_veloc_autom < e_veloc_max_via ) // Se a condicao: e_veloc_autom  e' menor que maior que e_veloc_max_via?
    {  // Se sim:
       printf("Sem multa, 0 pontos.\n");
    } else if ( (e_veloc_autom > e_veloc_max_via) && (e_veloc_autom <= (1.1*e_veloc_max_via) ) )
    {
             printf("Multa leve, 3 pontos.\n");
    } else if ((e_veloc_autom > (1.1*e_veloc_max_via)) && (e_veloc_autom <= (1.2*e_veloc_max_via)))
    {
             printf("Multa grave, 5 pontos.\n");
    } else 
    {
             printf("Multa gravissima, 7 pontos.\n");
    }
// Fluxograma: Desvio  : FIM

//Fluxograma: End  : Inicio
    return 0;
}
// Fluxograma: End  : Fim