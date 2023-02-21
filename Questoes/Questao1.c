#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 50
int multiplicacao(int numero, int escolha);
int main(void) {
int numero, escolha, index, resultado;
for(index = 0; index < SIZE; index++){
printf("Escolha o número\n");
scanf("%i", &numero);
printf("Digite 1 para ímpar ou 2 para par\n");
scanf("%i", &escolha);
if(escolha > 2 || escolha < 1){
printf("Escolha invalida\n");
}
else{
resultado = multiplicacao(numero, escolha);
printf("Resultado da multiplicacao é: %i\n", resultado);
}
}
return 0;
}
int index;
int resultado = 1;
for(index = escolha; index <= numero; index = index + 2){
resultado = resultado * index;
}
return resultado;
int multiplicacao(int numero, int escolha){
}
