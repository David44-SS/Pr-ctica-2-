#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int main(){   
float a,b,c;   
int x;do{
    printf("1.-Suma\n");
    printf("2.-Resta\n");
    printf("3.-Multiplicacion\n");
    printf("4.-Division\n");
    int opt;
    printf("Introduce la opcion de la operacion deseada\n");
    scanf("%d,&opt");
switch(opt){
case 1:   
printf("Introduce la primer cantidad\n");
scanf("%f,&a");
printf("Introduce la segunda cantidad\n");
scanf("%f,&b");          
c=a+b;   
printf("El resultado es:%f\n",c);   
break;
case 2:     
printf("Introduce la primer cantidad\n");
scanf("%f,&a");
printf("Introduce la segunda cantidad\n");scanf("%f,&b");         
c=a-b;    printf("El resultado es:%f\n",c);   
break;
case 3:     
printf("Introduce la primer cantidad\n");
scanf("%f,&a");
printf("Introduce la segunda cantidad\n");
scanf("%f,&b");         
c=a*b;   
printf("El resultado es:%f\n",c);   
break;
case 4:     
printf("Introduce la primer cantidad\n");
scanf("%f,&a");
printf("Introduce la segunda cantidad\n");
scanf("%f,&b");         
while (b==0){   
    printf("No se puede realizar la operaciòn\n");   
    printf("Introduzca otro valor\n");    }   
    c=a/b;   
    printf("El resultado es:%f\n",c);   
    break;
default:printf("Opcion invalida\n");
break;            
}
printf("Deseas hacer otra operacion? presione s para si");
scanf("%f,&x");
}while(x!=1);
}
