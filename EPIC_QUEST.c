

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

#define N 10000


struct respuesta{
char nresp1[N],nresp2[N],nresp3[N],nresp4[N],nresp5[N],nresp6[N],nresp7[N],nresp8[N],nresp9[N],nresp10[N];
};


//Recopilacio de funciones
void inicio();
void intruciones();
void caraacierto();
void carafallo();
void hack();
void vida(int vidas);
void moneda(int monedas);
void partidaganper(int vidas,char nombre[]);
void clases();
void estadisticas(char nombre[],int dimperso,char personaje[],int dimpers,int vidas, int monedas);



int main(){

	FILE*fhistoria,*flongitud;
//funci�n para poder implimir tildes, acentos y �
	setlocale(LC_CTYPE, "Spanish");
	struct respuesta respuestas[2]={{"DagobertoHernanBertolfo","13","1,3,6,4,2,5","3","50","10","17","domingo","5"},{"59","A","D","0","10","104","1","V","2368","7"}};
	char nombre[N],personaje[N],historia[N];
	char espacios[N],final[N],respuesta[N],tienda[N]="tienda",respu[N];
	int i,w=0,j,fin=0,jugadas=0,difi,vidas,monedas,tamanoparte[N],part=0,h;
	int hacks,sal,saltar,partes[N];



//Inicio  
    inicio();
	printf("Bienvenido jugador, introduzca su nombre:\n");
	/*for(i=0;i<51;i++){
		printf("\n");
	}*/
	fflush(stdin);
	gets(nombre);
	system("cls");
    


//comienza bucle
	do{
		
		printf("%s, escoja el personaje que quiere ser:\n",nombre);
		clases();

		/*for(i=0;i<22;i++){
			printf("\n");
		}*/
		fflush(stdin);
		gets(personaje);
		system("cls");
		printf("�Quiere leer las intrucciones y normas? (si/no)\n");
		scanf("%s",respuesta);
		if (respuesta[0]=='s'){
			intruciones();
		} else{		
			printf(" \n");
		}
		printf("Pulse enter para continuar:\n");
		fflush(stdin);
		gets(espacios);
        system("cls");
		printf(" ");
		printf("Escoja el nivel de dificultad que desea:\n");
		printf("(1)-->Historia1--> |Vida=5 corazones |Monedas=10|El protagonista se enfrenta a diversos problemas durante la caida de la antigua Roma\n");
		printf("(2)-->Historia2--> |Vida=3 corazones |Monedas=6|El protagonista se ve encerrado en una ciudad distopica que pocos pueden siquiera imaginar\n");
		scanf("%d",&difi);
		w=0;
		while (w==0){
			switch (difi){
				case 1: //Si se elige la opcion 1 comenzara el juego con la historia 1 y con monedas y vidas concretas para la historia 1
					if(h!=2){
					vidas=5;
			 		monedas=10;}
			 		fhistoria=fopen("historia1.txt","r");//apertura historia 1
		            flongitud=fopen("tamano1.txt","r");//apertura tama�o historia 1
			 		w=1;
		   			break;
				case 2: //Si se elige la opcion 2 comenzara el juego con la historia 2 y con monedas y vidas concretas para la historia 2
					if(h!=2){
			 		vidas=3;
			 		monedas=6;}
			 		fhistoria=fopen("historia2.txt","r");//apertura historia 2
		            flongitud=fopen("tamano2.txt","r");//apertura tama�o historia 2
			 		w=1;
			 		break;
		 		default: // Si se responde algo distinto a 1 o 2 salta el mensaje siguiente "No ha escogido una opci�n correcta, por favor introduzca la historia que desea jugar"
		     		printf("No ha escogido una opci�n correcta, por favor introduzca la historia que desea jugar:\n");
		      		scanf("%d",&difi);	
			}
		}
//lectura del tama�o
		if (flongitud==NULL){
			printf("Error en la apertura del tama�o de la historia\n");
			return 0;
		}
		i=0;
		while (!feof(flongitud)){//escaneamos el tama�o de las partes proveniente de un fichero
			fscanf(flongitud,"%d",&tamanoparte[i]);
	    	i++;
		}
		fclose(flongitud);

//lectura de la historia
		if (fhistoria==NULL){
			printf("Error en la apertura de la historia\n");
			return 0;
		}
		i=0;
		while (!feof(fhistoria)){//escaneamos el caracter por caracter la historia proveniente de un fichero
			fscanf(fhistoria,"%c",&historia[i]);
		    i++;
		}
		fclose(fhistoria);


//Inicio del juego
        system("cls");
		system ("color 89");
		printf("\n");
		printf("%s, aqu� comienza su historia, tendr� que luchar contra monstruos y vencer a esfinges cuyos enigmas ni las mentes m�s increibles, han logrado resolver. Aqu� perder� todo el miedo a las matem�ticas o dejar� la universidad, usted decide...\t",nombre);
		printf("\n");
		printf("-----------------\n");
		for(i=0;i<3;i++){
			printf("%c\t",5);
		}
		printf("\n-----------------\n");
		printf("Pulse enter para continuar:\n");
		fflush(stdin);
		gets(espacios);
		system("cls");

		
		
//parte 1
		for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[i]);
		}
		j=j+tamanoparte[part];
		part++;
		printf("\n");
		printf("Pulse enter para continuar:\n");
		fflush(stdin);
		gets(espacios);
		system("cls");
//parte 2
		for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[j+i]);
		}
		j=j+tamanoparte[part];
		part++;
		if(partes[0]!=1){
		printf("\n");
		printf("Introzuca aqui la respuesta:\n");
        scanf("%s",respu);
        i=0;
        while (i==0){
        if(strcmp(respu,respuestas[difi-1].nresp1)==0){
 	    	caraacierto();
 	    	i=1;
        } else{
 	    	carafallo();
 	    	printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la soluci�n la cual le cuesta 2 monedas:\n");
 	    	vidas--;
 	    	fflush(stdin);
 	    	gets(respu);
 	    		if (strcmp(respu,tienda)==0&&(monedas>0)){
					printf("La soluci�n comprada es: %s\n",respuestas[difi-1].nresp1);
 					monedas-=2;
 	    			i=1;
        		}
 	    		if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 					printf("No le quedan monedas\n");
 	    		} 
        	}
        	moneda(monedas);
        	vida(vidas);
        	
        }
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        system("cls");
		}
 
//parte 3
		if (vidas!=0){
			for(i=0;i<tamanoparte[part];i++){
				printf("%c",historia[j+i]);
			}
			j=j+tamanoparte[part];
			part++;
		if(partes[1]!=1){
			printf("\n");
			printf("Introzuca aqui la respuesta:\n");
    	    scanf("%s",respu);
    	    i=0;
    	    while (i==0){
    		    if(strcmp(respu,respuestas[difi-1].nresp2)==0){
 				    caraacierto();
 				    i=1;
     		   } else{
 	    			carafallo();
 	    			printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la soluci�n la cual le cuesta 2 monedas:\n");
 	    			vidas--;
 	    			scanf("%s",respu);
 	    			if (strcmp(respu,tienda)==0&&(monedas>0)){
						printf("La soluci�n comprada es: %s\n",respuestas[difi-1].nresp2);
 						monedas-=2;
 	    				i=1;
        			}
 	    			if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 						printf("No le quedan monedas\n");
 	    			} 
        		}
        		moneda(monedas);
        		vida(vidas);
        	    }
        	printf("Pulse enter para continuar:\n");
        	fflush(stdin);
        	gets(espacios);
        	system("cls");
        	}
        	

//parte 4
		if (vidas!=0){

			for(i=0;i<tamanoparte[part];i++){
				printf("%c",historia[j+i]);
			}
			j=j+tamanoparte[part];
			part++;
		   if(partes[2]!=1){
			printf("\n");
			printf("Introzuca aqui la respuesta:\n");
     	   	scanf("%s",respu);
    	    i=0;
    	    while (i==0){
        		if(strcmp(respu,respuestas[difi-1].nresp3)==0){
 	    			caraacierto();
 	    			i=1;
    		    } else{
 	    			carafallo();
 	    			printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la soluci�n la cual le cuesta 2 monedas:\n");
 	    			vidas--;
 	    			scanf("%s",respu);
 	    			if (strcmp(respu,tienda)==0&&(monedas>0)){
						printf("La soluci�n comprada es: %s\n",respuestas[difi-1].nresp3);
 						monedas-=2;
 	    				i=1;
        			}
 	    			if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 						printf("No le quedan monedas\n");
 	    			} 
        		}
        		moneda(monedas);
        		vida(vidas);
        	}
			printf("Pulse enter para continuar:\n");
        	fflush(stdin);
        	gets(espacios);
        	system("cls");
        }
        

//parte 5
		if (vidas!=0){

			for(i=0;i<tamanoparte[part];i++){
				printf("%c",historia[j+i]);
			}
			j=j+tamanoparte[part];
			part++;
			if(partes[3]!=1){

			printf("\n");
			printf("Introzuca aqui la respuesta:\n");
     	    scanf("%s",respu);
     	    i=0;
        	while (i==0){
    	 	   if(strcmp(respu,respuestas[difi-1].nresp4)==0){
 	    		caraacierto();
 	    		i=1;
        	} else{
 	    		carafallo();
 	    		printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la soluci�n la cual le cuesta 2 monedas:\n");
 	    		vidas--;
 	    		scanf("%s",respu);
 	    		if (strcmp(respu,tienda)==0&&(monedas>0)){
					printf("La soluci�n comprada es: %s\n",respuestas[difi-1].nresp4);
 					monedas-=2;
 	    			i=1;
        		}
 	   			if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 					printf("No le quedan monedas\n");
 	    		} 
        	}
        	moneda(monedas);
        	vida(vidas);
        }
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        system("cls");
        }
        


//parte 6
		if (vidas!=0){

			for(i=0;i<tamanoparte[part];i++){
				printf("%c",historia[j+i]);
			}
			j=j+tamanoparte[part];
			part++;
			if(partes[4]!=1){
			printf("\n");
			printf("Introzuca aqui la respuesta:\n");
        	scanf("%s",respu);
    	    i=0;
    	    while (i==0){
     		   if(strcmp(respu,respuestas[difi-1].nresp5)==0){
 					caraacierto();
 	    			i=1;
       			} else{
 	    			carafallo();
 	    			printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la soluci�n la cual le cuesta 2 monedas:\n");
 	    			vidas--;
 	    			scanf("%s",respu);
 	    			if (strcmp(respu,tienda)==0&&(monedas>0)){
						printf("La soluci�n comprada es: %s\n",respuestas[difi-1].nresp5);
 						monedas-=2;
 	    				i=1;
        			}
 	    			if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 						printf("No le quedan monedas\n");
 	   				} 
        		}
        		moneda(monedas);
        		vida(vidas);
        	}
        	printf("Pulse enter para continuar:\n");
        	fflush(stdin);
        	gets(espacios);
        	system("cls");
        }


//parte 7
		if (vidas!=0){
			for(i=0;i<tamanoparte[part];i++){
				printf("%c",historia[j+i]);
			}
			j=j+tamanoparte[part];
			part++;
			if(partes[5]!=1){
			printf("\n");
			printf("Introzuca aqui la respuesta:\n");
        	scanf("%s",respu);
        	i=0;
        	while (i==0){
    		    if(strcmp(respu,respuestas[difi-1].nresp6)==0){
 				    caraacierto();
 				    i=1;
     		    } else{
 	    			carafallo();
 	    			printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la soluci�n la cual le cuesta 2 monedas:\n");
 	    			vidas--;
 	    			scanf("%s",respu);
 	    			if (strcmp(respu,tienda)==0&&(monedas>0)){
						printf("La soluci�n comprada es: %s\n",respuestas[difi-1].nresp6);
 						monedas-=2;
 	    				i=1;
        			}
 	    			if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 						printf("No le quedan monedas\n");
 	    			} 
        		}
        		moneda(monedas);
        		vida(vidas);
        	}
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        system("cls");
        }
			


//parte 8
		if (vidas!=0){

			for(i=0;i<tamanoparte[part];i++){
				printf("%c",historia[j+i]);
			}
			j=j+tamanoparte[part];
			part++;
			if(partes[6]!=1){
			printf("\n");
			printf("Introzuca aqui la respuesta:\n");
        	scanf("%s",respu);
        	i=0;
        	while (i==0){
        	if(strcmp(respu,respuestas[difi-1].nresp7)==0){
 			    caraacierto();
 			    i=1;
        	} else{
 	    		carafallo();
 	    		printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la soluci�n la cual le cuesta 2 monedas:\n");
 	    		vidas--;
 	    		scanf("%s",respu);
 	    		if (strcmp(respu,tienda)==0&&(monedas>0)){
					printf("La soluci�n comprada es: %s\n",respuestas[difi-1].nresp7);
 					monedas-=2;
 	    			i=1;
        		}
 	    		if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 					printf("No le quedan monedas\n");
 	    		} 
        	}
        	moneda(monedas);
        	vida(vidas);
        }
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        system("cls");
        }

//parte 9
		if (vidas!=0){

			for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[j+i]);
			}
			j=j+tamanoparte[part];
			part++;
			if(partes[7]!=1){
			printf("\n");
			printf("Introzuca aqui la respuesta:\n");
        	scanf("%s",respu);
        	i=0;
        	while (i==0){
        		if(strcmp(respu,respuestas[difi-1].nresp8)==0){
 	    			caraacierto();
 	    			i=1;
        		} else{
 	    			carafallo();
 	    			printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la soluci�n la cual le cuesta 2 monedas:\n");
 	 			    vidas--;
 				    scanf("%s",respu);
 				    if (strcmp(respu,tienda)==0&&(monedas>0)){
						printf("La soluci�n comprada es: %s\n",respuestas[difi-1].nresp8);
 						monedas-=2;
 	    				i=1;
        			}
 	    			if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 						printf("No le quedan monedas\n");
 	    			} 
        		}
        		moneda(monedas);
        		vida(vidas);
        	}
        	printf("Pulse enter para continuar:\n");
        	fflush(stdin);
        	gets(espacios);
        	system("cls");
        }



//parte 10
		if (vidas!=0){

			for(i=0;i<tamanoparte[part];i++){
				printf("%c",historia[j+i]);
			}
			j=j+tamanoparte[part];
			part++;
			if(partes[8]!=1){
			printf("\n");
			printf("Introzuca aqui la respuesta:\n");
        	scanf("%s",respu);
        	i=0;
        	while (i==0){
        	if(strcmp(respu,respuestas[difi-1].nresp9)==0){
 	    	caraacierto();
 	    	i=1;
        	} else{
 	    		carafallo();
 	    		printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la soluci�n la cual le cuesta 2 monedas:\n");
 	    		vidas--;
 	    		scanf("%s",respu);
 	    		if (strcmp(respu,tienda)==0&&(monedas>0)){
					printf("La soluci�n comprada es: %s\n",respuestas[difi-1].nresp9);
 					monedas-=2;
 	    			i=1;
        		}
 	    		if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 					printf("No le quedan monedas\n");
 	    		} 
        	}
        	moneda(monedas);
        	vida(vidas);
        	
        }
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        system("cls");
    }
//parte 11
		if (vidas!=0){
			if (difi==2){
				for(i=0;i<tamanoparte[part];i++){
					printf("%c",historia[j+i]);
				}
				j=j+tamanoparte[part];
				part++;
				if(partes[9]!=1){
				printf("\n");
				printf("Introzuca aqui la respuesta:\n");
        		scanf("%s",respu);
        		i=0;
        		while (i==0){
        			if(strcmp(respu,respuestas[difi-1].nresp10)==0){
 	    				caraacierto();
 	    				i=1;
        			} else{
 	    				carafallo();
 	    				printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la soluci�n la cual le cuesta 2 monedas:\n");
 	    				vidas--;
 	    				scanf("%s",respu);
 	    				if (strcmp(respu,tienda)==0&&(monedas>0)){
							printf("La soluci�n comprada es: %s\n",respuestas[difi-1].nresp10);
 							monedas-=2;
 	    					i=1;
        				}
 	    				if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 							printf("No le quedan monedas\n");
 	    				} 
        			}
        			moneda(monedas);
        			vida(vidas);
        		}
        		printf("Pulse enter para continuar:\n");
        		fflush(stdin);
        		gets(espacios);
        		system("cls");
			}}
//parte 12
		if (vidas!=0){

			for(i=0;i<tamanoparte[part];i++){
				printf("%c",historia[j+i]);
			}
			j=j+tamanoparte[part];
			part++;
			printf("\n");

		}}}}}}}}}}

		partidaganper(vidas,nombre);
        estadisticas(nombre,10,personaje,10,vidas,monedas);


//fin 

		printf("�Desea, jugar de nuevo (si/no)?\n");
		/*for(i=0;i<49;i++){
			printf("\n");
		}*/
		gets(final);
		//Una vez acabado el juego se te pregunta si quieres volver a jugar con o sin hacks
		if (final[0]=='n'){ //Si se escribe no o n salta el final 
			fin=1;
		} else if(final[0]=='s'){ //Si se escribe si o s se inicia el juego preguntando al jugador si quiere elegir algun hack
		 	jugadas++;
		 	printf("\n");
		 	printf("Bienvenido de nuevo, %s\n",nombre);
		 	if (jugadas==1){
		 		printf("Por haber jugado honestamente la primera vez, le concedemos una serie de hacks.\n");}
		 		h=0;
		 		while (h==0){
		 			hack();
		 			scanf("%d",&hacks);
		 			switch (hacks){
		 				case 0://Hack de vidas y monedas infinitas
		 					monedas=1000;
		 					vidas=1000;
		 					printf("Hack activado, pulse enter\n");
		 					fflush(stdin);
		 					gets(espacios);
		 					h=2;
		 					break;
		 				case 1://Hack para poder saltarse partes
		 					    printf("�Cu�ntas partes quiere saltar?\n");
                			    scanf("%d",&sal);
                			    for (i=0;i<sal;i++){
		 		     			printf("Introzuca un numero: (comenzando la primera parte por 1=pregunta 1)\n");
		 		     			scanf("%d",&saltar);
		 		     			partes[saltar-1]=1;
				 			}
				 			h=1;
                            break;
		    			case 2://Hack para tener vidas y monedas infinitas y tambien poder saltarse partes
		    				 monedas=1000;
		 					 vidas=1000;
		 					 printf("�Cu�ntas partes quiere saltar?\n");
                			 scanf("%d",&sal);
                			 for (i=0;i<sal;i++){
		 		     			printf("Introzuca un n�mero: (comenzando la primera parte por 1=pregunta 1)\n");
		 		     			scanf("%d",&saltar);
		 		     			partes[saltar-1]=1;
				 			 }
				 			 h=2;
				 			 break;
		    			case 3://Si se escoge la opcion 3 la cual se presenta como "Ninguno" entonces se le felicitara al jugador por no elegir ningun hack
		   	     			printf("Gracias por no usar hacks :D .\n");
		   	     			h=1;
		   	     			break;
					}
				}
				j=0;
				part=0;
				system("cls");

		}
	} while(fin==0);
	
	return 0;
}



void inicio(){
	int i;
	char espacios[N];
	system ("color 8F");
//Inicio
	for(i=0;i<6;i++){
		printf("---\t");
	}
	printf("\n");
	for(i=0;i<6;i++){
    		if(i==3){
        		printf("|%c|            %cEPIC QUEST%c%c            |%c|\n",24,16,174,17,24);
		}
		printf("|%c|                                     |%c|\n",24,24);
	}
	for(i=0;i<6;i++){
		printf("---\t");}
	for(i=0;i<5;i++){
		printf("\n");
	}
	printf("Para poder disfrutar de la experiencia, ponga el programa en pantalla completa\nEn windows con la tecla 'F11' o 'FN'+'F11' en caso de no funcionar la primera\n");
	printf("Pulse enter para comenzar.\n");
	fflush (stdin);
	gets(espacios);
	system ("color 1A");
	for(i=0;i<6000;i++){
		printf("%c\t",25);
		printf("%c\t",31);
	}
	printf(" \n");
	printf(" \n");
	system("cls");
	system ("color 9E");
}




//Funcion de instrucciones (texto)
void intruciones(){
	printf("Las intrucciones y normas son b�sicas:\n");
	printf("-El jugador ha de ir resolviendo una serie de preguntas para avanzar en la historia.\n");
   	printf("-Se comienza con determinada vida y monedas, seg�n el nivel de dificultad escogido.\n");
  	printf("-Las monedas se pueden utilizar para comprar las soluciones a los acertijos,etc.\n");
  	printf("-No esta permitido hacer trampas, el jugador obtendr� un fichero con sus estad�sticas durante el juego.\n");
  	printf("\n");
}

//Funcion de cara cuando se acierta la respuesta
void caraacierto(){
	printf("La soluci�n es correcta\n");
	printf("----------\n");
	printf("|o      o|\n");
    printf("|    L   |\n");
    printf("|    D   |\n");
    printf("----------\n");
    printf("Prosigamos con la aventura\n");
 	printf("\n");
}

//Funcion de cara cuando se falla la respuesta
void carafallo(){
	printf("La soluci�n es incorrecta\n");
	printf("----------\n");
	printf("|�      �|\n");
    printf("|    C   |\n");
    printf("|    o   |\n");
    printf("----------\n");
 	printf("\n");
}

//Funcion de los hacks (texto)
void hack(){
	printf("�Quiere activar alguno de estos hacks?\n");
	printf("0=Inmortalidad (vidas y monedas infinitas)\n");
    printf("1=Saltarse alguna parte (Introduzca el numero de la parte)\n");
    printf("2=Ambos\n");
    printf("3=Ninguno\n");
}

//Funcion de vida
void  vida(int vidas){
	char i,j=3;
	printf("\n");
	if ((vidas<=5)&&(vidas>=0)){
		printf("-Le quedan %d vidas.\n",vidas);
		for (i=0;i<vidas;i++){
			printf("%c\t",j);
		}
	}else{
		printf("Vidas infinitas\n");
	}
	printf("\n");
}

//Funcion de monedas
void  moneda(int monedas){
	char i,j=169;
	printf("\n");
	if (monedas<=10){
	printf("-Le quedan %d monedas.\n",monedas);
		for (i=0;i<monedas;i++){
			printf("%c\t",j);
		}
	} else{
		printf("Monedas infinitas\n");
	}
	printf("\n");

}

//Funcion de fin del juego , cuando te quedas sin vidas pone "GAME OVER" y cuando acabas con vidas te felicita y continua el programa
void partidaganper(int vidas,char nombre[]){
	char espacios[N];
	system("cls");
	system ("color 5C");
	if(vidas==0){
        	printf("GAME OVER, %s\n",nombre);
        	printf("GAME OVER %s\n",nombre);
        	printf("GAME OVER %s\n",nombre);
        	printf("Los creadores le vendimos :D \n");
        	printf("\n");

        } else{
    		printf("\n");
			printf("%s. Enhorabuena ha conseguido derrotar al ingenio de los programadores :C \n",nombre);
			printf("\n");
		}
	printf("Pulse enter para continuar\n");
	printf("\n");
    fflush(stdin);
    gets(espacios);
    system("cls");

}

//Funcion de eleccion de clases (texto)
void clases(){
		printf("||           Caballero           ||             Hada              ||            Sabio              ||            Juglar             ||           Nigromante          ||           Personal            ||\n");
		printf("||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||\n");
		printf("||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||\n");
		printf("|| *S�mbolo de poder y gloria,*  ||    *Antigua protectora de*    ||      *M�ximo referente*       ||     *Por todos conocido,*     ||   *Un ser que ya ni humano*   ||    Muy pocos pueden llegar    ||\n"); 
		printf("||*portador de la antigua espada*||   *bosques  y manantiales,*   || *de intelectuales y l�deres,* || *aquel que por los senderos*  ||     *puede considerarse,*     ||    a ser grandes leyendas,    ||\n");
		printf("||         *de Drogmagt,*        ||        *venerada por*         || *legendario investigador con* ||   *deleita nuestros o�dos*    || *inmoral,  ambicioso y ajeno* ||     pero todos  deber�an      ||\n");
		printf("|| *aquel que sali� victorioso*  ||    *numerosas creencias,*     ||*innumerables  descubrimientos*|| *a cambio  de buen alimento,* || *a los principios naturales.* ||    tener una  oportunidad     ||\n");
		printf("|| *de m�ltiples y legendarias*  || *aquella llamada  por muchos* ||        *a su espalda,*        ||   *y que por  alg�n cobijo*   ||Protagonista de temibles actos,||   para intentar  igualarse    ||\n");
		printf("||         *contiendas.*         ||  *como descendiente directa*  ||    *genio tras varios de*     ||      *narra los eventos*      || difunde su  doctrina a la par ||    a estos seres m�ticos.     ||\n");
		printf("||                               ||    *de los mismos dioses*     ||    *los grandes  avances*     ||    *de parajes escondidos*    ||que estudia las  bases de todo,||                               ||\n");
		printf("||                               ||      *de la naturaleza.*      ||  *tecnol�gicos del momento.*  ||   *mientras juntos bebemos.*  || incluso da��ndose a s� mismo. ||                               ||\n");
		printf("||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||\n");
		printf("||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||\n");
		printf("||      Aunque el caballero      || Es bien sabido  que las hadas || Tras tantos a�os de estudios, ||  Toda una vida entreteniendo  ||  Desde que magia  y alquimia  ||No eres un gran ser legendario,||\n");
		printf("||     sea  reconocido  como     ||   son seres de coraz�n puro   ||este  anciano de fr�gil aspecto||     a todo tipo de seres      || alquimia fueron descubiertas, ||       ni mucho menos,         ||\n");
		printf("||    un h�roe  entre  h�roes    ||   y pensamiento  bondadoso,   ||     logr� la elaboraci�n      ||  a lo largo  del basto mundo  ||   no fueron  pocos los que    ||     apenas has salido de      ||\n");
		printf("||   debido a sus  incre�bles    ||  por lo que suelen despertar  ||         de un hechizo         || le han servido a este artista ||quisieron explorar sus l�mites,||       tu propia aldea,        ||\n");
		printf("||     capacidades f�sicas,      ||  la piedad  tanto de aliados  || que le permiti�  sobrevivir a ||   para obtener  suficientes   ||          ignorando            ||   pero esto no  te arrebata   ||\n");
		printf("|| tambi�n es de sobra conocido  ||       como de enemigos.       ||  a todo tipo de enfermedades, ||   conocimientos acerca del    ||  cualquier  principio moral.  ||     la ilusi�n de avanzar,    ||\n");
		printf("|| su  mal humor y su facilidad  ||    Debido a su naturaleza,    ||volvi�ndolo parcialmente inmune||   correcto establecimiento    ||Uno de ellos destac� del resto,||as� que te  dispones a afrontar||\n");
		printf("||     para la creaci�n de       ||   no posee gran resistencia   ||      al paso del tiempo.      || de relaciones con casi todos. ||         descubriendo          ||una nueva y peligrosa  aventura||\n");
		printf("||   conflictos innecesarios.    || ante  ning�n  tipo de ataque, ||   Su costumbre de aislarse    ||            Adem�s,            ||principios  profundos y oscuros||    de la que  nadie espera    ||\n");
		printf("||                               ||  pero esto queda compensado   || en sus estudios pudo volverle ||   la experiencia  obtenida    ||del mundo y su  funcionamiento,||      que salgas con vida.     ||\n");
		printf("||                               || con su capacidad de curaci�n. || el m�s inteligente del mundo, ||   durante todos sus viajes    || permiti�ndole  incluso evitar ||   (Esto es el modo dif�cil)   ||\n");
		printf("||                               ||                               ||    pero su escasa relaci�n    ||   hacia parajes inh�spitos    ||   da�os o incluso la muerte   ||     (por si no se nota XD)    ||\n");
		printf("||                               ||                               || con otros  seres lo ha vuelto ||   le ha servido para saber    ||  gracias a su  magia arcana.  ||                               ||\n");
		printf("||                               ||                               ||      odioso e irritante.      ||     reaccionar mejor ante     ||                               ||                               ||\n");
		printf("||                               ||                               ||                               ||   las  peores  situaciones.   ||                               ||                               ||\n");
		printf("||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||\n");
		printf("||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||\n");

}

//Funcion para estadisticas
void estadisticas(char nombre[],int dimperso,char personaje[],int dimpers,int vidas, int monedas){
	FILE*festadistica;
	festadistica=fopen("ESTADISTICASEPICQUEST.txt","a");//creamos o abrimos un fichero
	fprintf(festadistica, "Usuario: %s | Personaje escogido: %s | Vidas restantes: %d |Monedas no utilizadas: %d | ",nombre,personaje,vidas,monedas);
	fclose(festadistica);
}
