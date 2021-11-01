#include <stdio.h>

int main () {
    int vetor1[4], vetor2[2], resultado = 0, i;

    for (i=0; i<4; i++) {
        printf ("Digite o valor da posicao %d do Vetor1:\n", i+1);
        scanf ("%d", &vetor1[i]);
    }

    for (i=0; i<4; i++) {
        printf ("Digite o valor da posicao %d do Vetor2:\n", i+1);
        scanf ("%d", &vetor2[i]);
    }

    for (i=0; i<4; i++) {
        resultado = resultado +(vetor1[i] * vetor2[2]);
    }

    printf ("O Produto escalar dos dois vetor eh de: %d \n", resultado);

return 0;
}