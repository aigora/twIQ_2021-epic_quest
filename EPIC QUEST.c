/*EPIC QUEST*/
/*Creadores:
Eduardo Hu�lamo Castellanos
Jaime Alonso Poyatos
Javier Escudero Garc�a
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>
#include <string.h> 

#define N 1000

int main(){
//funci�n para poder implimir tildes, acentos y �
setlocale(LC_CTYPE, "Spanish");
system ("color 8F");
char usuario[N],contrasena[N],espacios[N],nombre[N],final[N],personaje[N];
int i,fin=0;


//Inicio
for(i=0;i<6;i++){
printf("---\t");}
printf("\n");
for(i=0;i<5;i++){
	if(i==3){
		printf("| |             EPIC QUEST              | |\n");}
printf("| |                                     | |\n");}
for(i=0;i<6;i++){
printf("---\t");}
for(i=0;i<5;i++){
printf("\n");}
printf("Pulse enter para comenzar.");
gets(espacios);
system ("color 1A");
for(i=0;i<6000;i++){
printf("->\t");}
printf(" \n");
printf(" \n");
system ("color 9E");
printf("Bienvenido, introduzca su nombre:\n");
for(i=0;i<27;i++){
printf("\n");}
gets(nombre);
for(i=0;i<100;i++){
printf("\n");}

do{

printf("Escoja que personaje quiere ser:\n");
printf("Caballero\n");
printf("Hada\n");
printf("Duende\n");

//modificar
for(i=0;i<24;i++){
printf("\n");}
gets(personaje);




	






printf("�Desea, jugar de nuevo (si/no)?\n");
for(i=0;i<27;i++){
printf("\n");}
gets(final);

if (final[0]=='n'){
fin=1;}
else if(final[0]=='s'){
printf("Bienvenido de nuevo, %s\n",nombre);}
}
while(fin==0);
return 0;
}

