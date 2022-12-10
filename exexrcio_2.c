#include <stdio.h>
#include <math.h>
int main() {
   float cateto1;
   float cateto2;
   float resultadoRaiz;
  
  printf("digite um numero: ");
  scanf("%f", &cateto1);
  printf("digire um numero: ");
  scanf("%f", &cateto2);
  resultadoRaiz = sqrt (pow (cateto1,2.0) + pow (cateto2,2.0));
  printf("resultado da raiz eh: %.0f\n", resultadoRaiz);
  }  