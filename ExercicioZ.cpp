#include <stdio.h>
#include <stdlib.h>
#define V 22

int main(){
 int ltr = 65, tam = 0, esp, contA, contB;
 int vetor[V] = {};
 printf("Determine o tamanho do Z: ");
 scanf("%d", &tam);

 // Primeira linha
 for(contA = 1; contA <= tam; contA++){
    vetor[contA] = ltr;
    printf("%c  ", vetor[contA]);
    ltr++;
    // Linha inclinada
    if(contA == tam){
     printf("\n");
     for(contB = 2; contB < tam; contB++){
      for(esp = tam; esp > contB; esp--){
       printf("   ");}
      vetor[contB] = ltr;
      printf("%c\n", vetor[contB]);
      ltr++;
      if(ltr == 90) ltr = 65; // letra == Z, volta ao A
   }
   // Ultima linha - contB é reutilizado
   for(contB = 0; contB < tam; ltr++ && contB++){
    vetor[contB] = ltr;
    printf("%c  ", vetor[contB]);
    if(ltr == 90) ltr = 64; // letra == Z, volta ao A
   }
  }
 }
}

