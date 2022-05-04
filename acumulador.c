#include <stdio.h>
#include <stdlib.h>

int main(){
int monto;
 int acumulador=0;
printf("\nIngrese un monto:");
scanf("%d",&monto);
acumulador= acumulador+monto;
printf("\nIngrese un segundo monto:");
scanf("%d",&monto);
acumulador= acumulador+monto;
printf("\nIngrese un tercer monto:");
scanf("%d",&monto);
 acumulador= acumulador+monto;
 printf("\nEl monto total es:%d",acumulador);


    return 0;
}