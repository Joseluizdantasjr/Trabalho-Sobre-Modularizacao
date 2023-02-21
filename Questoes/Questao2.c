#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 100
int checagem(int ano);
int main(void) {
int ano, resultado, index;
for(index = 0; index < SIZE; index++){
printf("Insira um ano:\n");
scanf("%i", &ano);
resultado = checagem(ano);
if(resultado == 1){
printf("O ano %i é bissexto\n", ano);
}
else{
printf("O ano %i não é bissexto\n", ano);
}
}
return 0;
}
int checagem(int ano){
int resultado;
if(ano % 400 == 0){
resultado = 1;
}
else if(ano % 4 == 0 && ano % 100 != 0){
resultado = 1;
}
else{
resultado = 0;
}
return resultado;
}
