#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 100
int calculadora(int numero1, int numero2, char operador);
int main(void) {
int index, numero1, numero2, resultado;
char operador;
for(index = 0; index < SIZE; index++){
printf("Escolha o primeiro numero:\n");
scanf("%i", &numero1);
printf("Escolha o operador:\n");
scanf("\n%[^\n]", &operador);
if(strcmp(&operador, "+") != 0 && strcmp(&operador, "-") != 0 && strcmp(&operador, "*") != 0 && stprintf("Erro, digite um operador valido\n");
}
else{
printf("Escolha o segundo numero:\n");
scanf("%i", &numero2);
resultado = calculadora(numero1, numero2, operador);
printf("Resultado: %i\n", resultado);
}
}
return 0;
}
int calculadora(int numero1, int numero2, char operador){
int resultado;
if(strcmp(&operador, "+") == 0){
resultado = numero1 + numero2;
}
else if(strcmp(&operador, "-") == 0){
resultado = numero1 - numero2;
}
else if(strcmp(&operador, "*") == 0){
resultado = numero1 * numero2;
}
else if(strcmp(&operador, "/") == 0){
resultado = numero1 / numero2;
}
else if(strcmp(&operador, "%") == 0){
resultado = numero1 % numero2;
}
return resultado;
}
