#include <stdio.h>

int main(){

    int vetor[20], i = 0, aux;
   
    for ( i=0; i<20; i++) {
        printf("Informe o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
   
    printf("\n VETOR ORIGINAL: ");
    for ( i=0; i<20; i++) {
        printf("[%d] ", vetor[i]);
    }
   
    for ( i=0; i<10; i++) {
        aux = vetor[i];
        vetor[i] = vetor[19-i];
        vetor[19-i] = aux;
    }
   
    printf("\nVETOR MODIFICADO: ");
    for ( i=0; i<20; i++){
        printf("[%d] ", vetor[i]);
    }
   

    return 0;
}