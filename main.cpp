#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void cromado(int hrs,int minu,int seg);

int main (){

int hrs,minu,seg;

do{

printf("Cronometro\ningrese en que tiempo desea detenernse(solo numeros enteros porfavor)\n");
printf("En cuantas horas? : ");
scanf("%d",&hrs);

printf("En cuantos minutos? : ");
scanf("%d",&minu);

printf("En cuantos segundos? : ");
scanf("%d",&seg);


if(hrs > 23 || hrs < 0 || minu > 60 || minu < 0 || seg > 60 || seg < 0){
printf("\nUn parametro esta fuera del limite establecido, intente de nuevo\n");

usleep(3000000);
}
system("clear");

}while(hrs > 23 || hrs < 0 || minu > 60 || minu < 0 || seg > 60 || seg < 0);

system("clear");



cromado(hrs,minu,seg);


 return 0;
 }
