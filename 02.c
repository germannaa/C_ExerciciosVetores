#include <stdio.h>

int main () {

int num[10], i;
int soma = 0;

    for ( i = 0 ; i < 10; i++){
        printf ("Inserir numero %d \n", i +1);
        scanf ("%d" ,&num[i]);
        }

        for ( i = 0 ; i < 10; i++){
            soma = soma + num[i];
        }

    printf ("Soma dos valores digitados: %d\n", soma);

    
    return (0);
}