#include <stdio.h>

int main()
{
    int vet[10], i, soma=0, qtneg=0;
    
        for(i=0;i<=9;i++){

            printf("informe o valor do vetor %d \n",i+1);
            scanf("%i", &vet[i]);


            if(vet[i]>0)
                soma = soma +vet[i];
                     
            if(vet[i]<0)
                qtneg = qtneg + 1;
        }


    printf("Numeros positivos: soma = %d\n", soma);
    printf("Numeros negativos: quantidade = %d\n", qtneg);

return 0;
}