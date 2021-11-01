#include <stdio.h>

int main () {

int vetor1[10], vetor2[10], i, j, guarda = 0;

    for ( i = 0 ; i < 10; i++){
        printf ("Inserir numero %d do primeiro vetor.\n", i +1);
        scanf ("%d" ,&vetor1[i]);
        }

    for ( j = 0 ; j < 10; j++){
        printf ("Inserir numero %d do segundo vetor.\n", j +1);
        scanf ("%d" ,&vetor2[j]);
        }

        for (i=0, j=0; i<10, j<10; i++, j++)
            if (vetor1[i] == vetor2[j]) {
            guarda = vetor1[i];

            printf ("Valores repetidos nos vetores: %d. \n", guarda);
        }
        
    return (0);
}