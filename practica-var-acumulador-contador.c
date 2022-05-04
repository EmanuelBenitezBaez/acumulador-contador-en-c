
/*
Desarrollar un programa que calcule e informe  por pantalla el promedio de 4 notas que seran ingresadas por el usuario.Las notas pueden ser con decimales, por ejemplo: 7.5.
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota ;
float acumulador=0;
float promedio;
printf("\nIngrese la primer nota:");
scanf("%f",&nota);
acumulador=acumulador+nota;
printf("\nIngrese la segunda nota:");
scanf("%f",&nota);
acumulador=acumulador+nota;
printf("\nIngrese la tercer nota:");
scanf("%f",&nota);
acumulador=acumulador+nota;
printf("\nIngrese la cuarta nota:");
scanf("%f",&nota);
acumulador=acumulador+nota;
promedio= acumulador / 4;
printf("\nEl promedio de las notas es: %.2f",promedio);


    return 0;
}