#include <stdio.h>
#include <stdlib.h>
#define PRECO 3.55
void estacionamento(int hora1, int hora2, int *horadif, int min1, int min2, int *mindif, float *valint main(void) {
int hora1, hora2, horadif, min1, min2, mindif;
float valor;
printf("Insira a hora do horário de entrada\n");
scanf("%i", &hora1);
if(hora1 > 24 || hora1 < 0){
printf("Horário inválido\n");
}
else{
printf("Insira os minutos do horário de entrada\n");
scanf("%i", &min1);
if(min1 > 59 || min1 < 0){
printf("Horário inválido\n");
}
else{
printf("Insira a hora do horário de saída\n");
scanf("%i", &hora2);
if(hora2 > 24 || hora2 < 0){
printf("Horário inválido\n");
}
else{
printf("Insira os minutos do horário de saída\n");
scanf("%i", &min2);
if(min2 > 59 || min2 < 0){
printf("Horário inválido\n");
}
else{
estacionamento(hora1, hora2, &horadif, min1, min2, &mindif, &valor);
printf("Tempo de permanencia: %i horas e %i minutos\n", horadif, mindif);
printf("Valor: %.2f\n", valor);
}
}
}
}
return 0;
}
void estacionamento(int hora1, int hora2, int *horadif, int min1, int min2, int *mindif, float *val*horadif = hora2 - hora1;
if(min1 > min2){
*horadif = *horadif - 1;
*mindif = 60 - min1 + min2;
}
else{
*mindif = min2 - min1;
}
*valor = *horadif * PRECO;
}
