#include <stdio.h>

int main () {

int vet[10] , i , m , pos, exit ;
pos = 0 ;
//m = vet[0];
        
        for (i = 0 ; i < 10; i++) {
            printf ( " Inserir numero %d \n" , i +1);
            scanf ( "%d", &vet[i]);
            }
            
            
        printf ("Escolha um numero para procurar no vetor:\n");
        scanf ("%d", &m);
            

            for ( i = 1 ; i < 10; i++) {

                if ( m == vet[i]) {
                    pos = i ;
                    exit = 1;
                    printf ( "O numero %d esta na posicao %d.\n" , m , pos+1 ) ;
                    }
            }
                    if (exit != 1) {
                        printf ("O numero nao existe dentro do vetor.\n");
                    }
    return (0);
}