#include <stdio.h>

int main (){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--

    */

    int numero1 = 1,resultado;

    printf("Antes do incremento: %d\n", numero1);
    //numero1 = numero1 +1;
    //numero1 += 1;
    //Pos incremento:
    //Resultado = numero1;
    //numero++; 

   resultado = numero1++;
   //printf("Apos incremento: %d\n", numero1, );
;    printf("Apos Pós-incremento - numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
;    printf("Apos Pré-incremento - numero 1: %d - Resultado: %d\n", numero1, resultado);



//numero1 = numero1 - 1;
    //numero1 -= 1;
//numero1--;;
 // printf("Apos decremento: %d\n", numero1);
resultado = numero1--;
printf("Apos Pós-decremento - numero 1: %d - Resultado: %d\n", numero1, resultado);

 
    resultado = --numero1;
printf("Apos Pré-decremento- numero 1: %d - Resultado: %d\n", numero1, resultado);


}