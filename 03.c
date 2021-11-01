#include <stdio.h>

int main () {

int num[10], i;

    for ( i = 0 ; i < 10; i++){
        printf ("Inserir numero %d \n", i +1);
        scanf ("%d" ,&num[i]);
        }

        printf("A ordem inversa dos valores entrados e:\n"); 

        for(i=0; i<10; i++)
        printf("%d\n", num[9-i]);
        
    
    return (0);
}