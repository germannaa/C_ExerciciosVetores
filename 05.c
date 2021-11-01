#include <stdio.h>

int main () {

int contador, i = 0, j = 0, k = 0, num[7];
int multiplo2[7], multiplo3[7], multiplo2e3[7];


  for(contador=0; contador<7; contador++){

      printf("\n Digite os numeros: \n");
      scanf("%d",&num[contador]); 
  }
    
       for(contador=0;contador<7;contador++){

          if(num[contador]%2==0){ 
             multiplo2[i]=num[contador];
          i++;
          }

      if(num[contador] % 3==0){
           multiplo3[j]=num[contador];
           j++;
         }

       if (num[contador] % 2 == 0 && num[contador] % 3 == 0 ) {
          multiplo2e3[k] = num[contador];
          k++;
         }    
       }


    printf("\n Múltiplo de 2 : ");
    for(contador=0;contador<i;contador++){
        printf("%d ",multiplo2[contador]);
      }

    printf("\n Múltiplo de 3 :  ");
    for(contador=0;contador<j;contador++) {
        printf("%d ",multiplo3[contador]);
      }

    printf("\n Múltiplo de 2 e 3 : ");
    for(contador=0;contador<k;contador++) {
        printf("%d  ",multiplo2e3[contador]);
      }
  

    return (0);
}