#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 100
float IMC(int opcao, float altura, float massa);
int main(void) {
float altura, massa;
int opcao, index;
for(index = 0; index < SIZE; index++){
printf("Escolha 1 para mulher, escolha 2 para homem:\n");
scanf("%i", &opcao);
if(opcao > 2 || opcao < 1){
printf("Erro de digitação, atente as opções.\n");
}
else{
printf("Digite sua altura em centimetros:\n");
scanf("%f", &altura);
printf("Digite seu peso em kilogramas:\n");
scanf("%f", &massa);
float resultado = IMC(opcao, altura, massa);
printf("IMC = %.1f\n", resultado);
}
}
return 0;
}
float IMC(int opcao, float altura, float massa){
float resultado;
if(opcao == 1){
resultado = ((95 * massa) / 100) / ((altura * altura) / 10000);
}
else if(opcao == 2){
resultado = ((105 * massa) / 100) / ((altura * altura) / 10000);
}
return resultado;
}
