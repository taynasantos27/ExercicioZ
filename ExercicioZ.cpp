#include <stdio.h>
#include <stdlib.h>
#define V 22

int main(){
 int letra = 65, tam = 0, esp, contA, contB;
 int vetor[V] = {};
 printf("Determine o tamanho do Z: ");
 scanf("%d", &tam);

 // Primeira linha
 for(contA = 1; contA <= tam; contA++){
    vetor[contA] = letra;
    printf("%c  ", vetor[contA]);
    letra++;
    // Linha inclinada
    if(contA == tam){
     printf("\n");
     for(contB = 2; contB < tam; contB++){
      for(esp = tam; esp > contB; esp--){
       printf("   ");}
      vetor[contB] = letra;
      printf("%c\n", vetor[contB]);
      letra++;
      if(letra == 90) letra = 65; // letra == Z, volta ao A
   }
   // Ultima linha - contB é reutilizado
   for(contB = 0; contB < tam; letra++ && contB++){
    vetor[contB] = letra;
    printf("%c  ", vetor[contB]);
    if(letra == 90) letra = 64; // letra == Z, volta ao A
   }
  }
 }
}

