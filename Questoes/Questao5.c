#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 100
void progressao(float a1, float q, int n, float *an, float *sn);
int main(void) {
float a1, q, an, sn;
int n, index;
for(index = 0; index < SIZE; index++){
printf("Digite a1\n");
scanf("%f", &a1);
printf("Digite q\n");
scanf("%f", &q);
printf("Digite n\n");
scanf("%i", &n);
progressao(a1, q, n, &an, &sn);
printf("A%i = %.2f\n", n, an);
printf("Sn = %.2f\n", sn);
}
printf("Hello World\n");
return 0;
}
void progressao(float a1, float q, int n, float *an, float *sn){
*an = a1 * pow(q, (n - 1));
*sn = (a1 * (pow(q, n) - 1)) / (q - 1);
}
