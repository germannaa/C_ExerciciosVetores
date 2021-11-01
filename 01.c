#include <stdio.h>

int main () {

int num[20], i;

    for ( i = 0 ; i < 20; i++){
        printf ("Inserir numero %d \n", i +1);
        scanf ("%d" ,&num[i]);
        }

        for ( i = 0 ; i < 20; i++){
            if (num[i] % 2 == 0 )
                printf ("Numero par digitado: %d\n", num[i]);
        }


    return (0);
}