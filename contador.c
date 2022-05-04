#include <stdio.h>
#include <stdlib.h>

int main(){

float temperatura;
int contador = 0;
printf("Ingrese una temperatura:");
scanf("%f",&temperatura);
contador++;
printf("Ingrese otra temperatura:");
scanf("%f",&temperatura);
contador++;
printf("Ingrese otra temperatura:");
scanf("%f",&temperatura);
contador++;
printf("Se ingresaron %d temperaturas",contador);
    return 0;
}