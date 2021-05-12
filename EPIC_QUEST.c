

/*EPIC QUEST*/
/*Creadores:
Eduardo Huélamo Castellanos
Jaime Alonso Poyatos
Javier Escudero García
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

void inicio();
void intruciones();
void caraacierto();
void carafallo();
void hack();
void  vida(int vidas);
void  moneda(int monedas);
void estadisticas(char nombre[],int dimperso,char personaje[],int dimpers,int vidas, int monedas);



int main(){

	FILE*fhistoria,*flongitud;
//función para poder implimir tildes, acentos y ñ
	setlocale(LC_CTYPE, "Spanish");
	struct respuesta respuestas[2]={{"59","A","D","0","10"},{"59","A","D","0","10","104","1","V","2368","7"}};
	char nombre[N],personaje[N],historia[N];
	char espacios[N],final[N],respuesta[N],tienda[N]="tienda",respu[N];
	int i,w=0,j,fin=0,jugadas=0,difi,vidas,monedas,tamanoparte[N],part=0,h;
	int hacks,sal,saltar,partes[N];



//Inicio
inicio();
	printf("Bienvenido jugador, introduzca su nombre:\n");
	for(i=0;i<51;i++){
		printf("\n");
	}
	fflush(stdin);
	gets(nombre);
	for(i=0;i<100;i++){
		printf("\n");
	}



//comienza bucle
	do{
		
		printf("%s, escoja el personaje que quiere ser:\n",nombre);

		printf("||           Caballero           ||             Hada              ||            Sabio              ||            Juglar             ||           Nigromante          ||           Personal            ||\n");
		printf("||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||\n");
		printf("||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||\n");
		printf("|| *Símbolo de poder y gloria,*  ||    *Antigua protectora de*    ||      *Máximo referente*       ||     *Por todos conocido,*     ||   *Un ser que ya ni humano*   ||    Muy pocos pueden llegar    ||\n"); 
		printf("||*portador de la antigua espada*||   *bosques  y manantiales,*   || *de intelectuales y líderes,* || *aquel que por los senderos*  ||     *puede considerarse,*     ||    a ser grandes leyendas,    ||\n");
		printf("||         *de Drogmagt,*        ||        *venerada por*         || *legendario investigador con* ||   *deleita nuestros oídos*    || *inmoral,  ambicioso y ajeno* ||     pero todos  deberían      ||\n");
		printf("|| *aquel que salió victorioso*  ||    *numerosas creencias,*     ||*innumerables  descubrimientos*|| *a cambio  de buen alimento,* || *a los principios naturales.* ||    tener una  oportunidad     ||\n");
		printf("|| *de múltiples y legendarias*  || *aquella llamada  por muchos* ||        *a su espalda,*        ||   *y que por  algún cobijo*   ||Protagonista de temibles actos,||   para intentar  igualarse    ||\n");
		printf("||         *contiendas.*         ||  *como descendiente directa*  ||    *genio tras varios de*     ||      *narra los eventos*      || difunde su  doctrina a la par ||    a estos seres míticos.     ||\n");
		printf("||                               ||    *de los mismos dioses*     ||    *los grandes  avances*     ||    *de parajes escondidos*    ||que estudia las  bases de todo,||                               ||\n");
		printf("||                               ||      *de la naturaleza.*      ||  *tecnológicos del momento.*  ||   *mientras juntos bebemos.*  || incluso dañándose a sí mismo. ||                               ||\n");
		printf("||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||\n");
		printf("||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||\n");
		printf("||      Aunque el caballero      || Es bien sabido  que las hadas || Tras tantos años de estudios, ||  Toda una vida entreteniendo  ||  Desde que magia  y alquimia  ||No eres un gran ser legendario,||\n");
		printf("||     sea  reconocido  como     ||   son seres de corazón puro   ||este  anciano de frágil aspecto||     a todo tipo de seres      || alquimia fueron descubiertas, ||       ni mucho menos,         ||\n");
		printf("||    un héroe  entre  héroes    ||   y pensamiento  bondadoso,   ||     logró la elaboración      ||  a lo largo  del basto mundo  ||   no fueron  pocos los que    ||     apenas has salido de      ||\n");
		printf("||   debido a sus  increíbles    ||  por lo que suelen despertar  ||         de un hechizo         || le han servido a este artista ||quisieron explorar sus límites,||       tu propia aldea,        ||\n");
		printf("||     capacidades físicas,      ||  la piedad  tanto de aliados  || que le permitió  sobrevivir a ||   para obtener  suficientes   ||          ignorando            ||   pero esto no  te arrebata   ||\n");
		printf("|| también es de sobra conocido  ||       como de enemigos.       ||  a todo tipo de enfermedades, ||   conocimientos acerca del    ||  cualquier  principio moral.  ||     la ilusión de avanzar,    ||\n");
		printf("|| su  mal humor y su facilidad  ||    Debido a su naturaleza,    ||volviéndolo parcialmente inmune||   correcto establecimiento    ||Uno de ellos destacó del resto,||así que te  dispones a afrontar||\n");
		printf("||     para la creación de       ||   no posee gran resistencia   ||      al paso del tiempo.      || de relaciones con casi todos. ||         descubriendo          ||una nueva y peligrosa  aventura||\n");
		printf("||   conflictos innecesarios.    || ante  ningún  tipo de ataque, ||   Su costumbre de aislarse    ||            Además,            ||principios  profundos y oscuros||    de la que  nadie espera    ||\n");
		printf("||                               ||  pero esto queda compensado   || en sus estudios pudo volverle ||   la experiencia  obtenida    ||del mundo y su  funcionamiento,||      que salgas con vida.     ||\n");
		printf("||                               || con su capacidad de curación. || el más inteligente del mundo, ||   durante todos sus viajes    || permitiéndole  incluso evitar ||   (Esto es el modo difícil)   ||\n");
		printf("||                               ||                               ||    pero su escasa relación    ||   hacia parajes inhóspitos    ||   daños o incluso la muerte   ||     (por si no se nota XD)    ||\n");
		printf("||                               ||                               || con otros  seres lo ha vuelto ||   le ha servido para saber    ||  gracias a su  magia arcana.  ||                               ||\n");
		printf("||                               ||                               ||      odioso e irritante.      ||     reaccionar mejor ante     ||                               ||                               ||\n");
		printf("||                               ||                               ||                               ||   las  peores  situaciones.   ||                               ||                               ||\n");
		printf("||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||\n");
		printf("||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||-------------------------------||\n");

//modificar
		for(i=0;i<19;i++){
			printf("\n");
		}
		fflush(stdin);
		gets(personaje);
		printf("¿Quiere leer las intrucciones y normas? (si/no)\n");
		scanf("%s",respuesta);
		if (respuesta[0]=='s'){
			intruciones();
		} else{		
			printf(" \n");
		}
		printf("Pulse enter para continuar:\n");
		fflush(stdin);
		gets(espacios);

		printf(" ");
		printf("Escoja el nivel de dificultad que desea:\n");
		printf("(1)-->Dificultad1--> |Vida=5 corazones |Monedas=10|Otros=El personaje tiene .....,preguntas más fáciles,etc\n");
		printf("(2)-->Dificultad2--> |Vida=3 corazones |Monedas=8|Otros=El personaje tiene .....\n");
		scanf("%d",&difi);
		w=0;
		while (w==0){
			switch (difi){
				case 1:
					if(h!=2){
					vidas=5;
			 		monedas=10;}
			 		fhistoria=fopen("historia1.txt","r");
		            flongitud=fopen("tamano1.txt","r");
			 		w=1;
		   			break;
				case 2:
					if(h!=2){
			 		vidas=3;
			 		monedas=8;}
			 		fhistoria=fopen("historia2.txt","r");
		            flongitud=fopen("tamano2.txt","r");
			 		w=1;
			 		break;
		 		default:
		     		printf("No ha escogido una opción correcta, por favor introduzca un nivel de dificultad:\n");
		      		scanf("%d",&difi);	
			}
		}
//lectura del tamaño
		if (flongitud==NULL){
			printf("Error en la apertura del tamaño de la historia\n");
			return 0;
		}
		i=0;
		while (!feof(flongitud)){
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
		while (!feof(fhistoria)){
			fscanf(fhistoria,"%c",&historia[i]);
		    i++;
		}
		fclose(fhistoria);

//Juego
		system ("color 89");
		printf("\n");
		printf("\n");
		for(i=0;i<50;i++){
			printf("\n");
		}
		printf("%s, aquí comienza su historia, tendrá que luchar contra monstruos y vencer a esfinges cuyos enigmas ni las mentes más increibles, han logrado resolver. Aquí perderá todo el miedo a las matemáticas o dejará la universidad, usted decide...\t",nombre);
		printf("\n");
		printf("--------------\n");
		for(i=0;i<3;i++){
			printf("||||||||||||||\n");
		}
		printf("--------------\n");

		printf("Pulse enter para continuar:\n");
		fflush(stdin);
		gets(espacios);
		
		
		

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
//parte 2
		for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[j+i]);
		}
		j=j+tamanoparte[part];
		part++;
		printf("\n");
		printf("Introzuca aqui la respuesta:\n");
        scanf("%s",respu);
        i=0;
        while (i==0&&vidas>0&&partes[saltar]==0){
        if(strcmp(respu,respuestas[difi-1].nresp1)==0){
 	    caraacierto();
 	    i=1;
        }
        else{
 	    carafallo();
 	    printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la solución la cual le cuesta 2 monedas:\n");
 	    vidas--;
 	    fflush(stdin);
 	    gets(respu);
 	    if (strcmp(respu,tienda)==0&&(monedas>0)){
		printf("La solución comprada es: %s\n",respuestas[difi-1].nresp1);
 		monedas-=2;
 	    i=1;
        }
 	    if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 		printf("No le quedan monedas\n");
 	    } 
        }
        moneda(monedas);
        vida(vidas);
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        }
 
//parte 3
		for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[j+i]);
		}
		j=j+tamanoparte[part];
		part++;
		printf("\n");
		printf("Introzuca aqui la respuesta:\n");
        scanf("%s",respu);
        i=0;
        while (i==0&&vidas>0&&partes[saltar]==0){
        if(strcmp(respu,respuestas[difi-1].nresp2)==0){
 	    caraacierto();
 	    i=1;
        }
        else{
 	    carafallo();
 	    printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la solución la cual le cuesta 2 monedas:\n");
 	    vidas--;
 	    scanf("%s",respu);
 	    if (strcmp(respu,tienda)==0&&(monedas>0)){
		printf("La solución comprada es: %s\n",respuestas[difi-1].nresp2);
 		monedas-=2;
 	    i=1;
        }
 	    if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 		printf("No le quedan monedas\n");
 	    } 
        }
        moneda(monedas);
        vida(vidas);
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        }

//parte 4

		for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[j+i]);
		}
		j=j+tamanoparte[part];
		part++;
		printf("\n");
		printf("Introzuca aqui la respuesta:\n");
        scanf("%s",respu);
        i=0;
        while (i==0&&vidas>0&&partes[saltar]==0){
        if(strcmp(respu,respuestas[difi-1].nresp3)==0){
 	    caraacierto();
 	    i=1;
        }
        else{
 	    carafallo();
 	    printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la solución la cual le cuesta 2 monedas:\n");
 	    vidas--;
 	    scanf("%s",respu);
 	    if (strcmp(respu,tienda)==0&&(monedas>0)){
		printf("La solución comprada es: %s\n",respuestas[difi-1].nresp3);
 		monedas-=2;
 	    i=1;
        }
 	    if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 		printf("No le quedan monedas\n");
 	    } 
        }
        moneda(monedas);
        vida(vidas);
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        }
        

//parte 5
		for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[j+i]);
		}
		j=j+tamanoparte[part];
		part++;
		printf("\n");
		printf("Introzuca aqui la respuesta:\n");
        scanf("%s",respu);
        i=0;
        while (i==0&&vidas>0&&partes[saltar]==0){
        if(strcmp(respu,respuestas[difi-1].nresp4)==0){
 	    caraacierto();
 	    i=1;
        }
        else{
 	    carafallo();
 	    printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la solución la cual le cuesta 2 monedas:\n");
 	    vidas--;
 	    scanf("%s",respu);
 	    if (strcmp(respu,tienda)==0&&(monedas>0)){
		printf("La solución comprada es: %s\n",respuestas[difi-1].nresp4);
 		monedas-=2;
 	    i=1;
        }
 	    if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 		printf("No le quedan monedas\n");
 	    } 
        }
        moneda(monedas);
        vida(vidas);
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        }
        


//parte 6
		for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[j+i]);
		}
		j=j+tamanoparte[part];
		part++;
		printf("\n");
		printf("Introzuca aqui la respuesta:\n");
        scanf("%s",respu);
        i=0;
        while (i==0&&vidas>0&&partes[saltar]==0){
        if(strcmp(respu,respuestas[difi-1].nresp5)==0){
 	    caraacierto();
 	    i=1;
        }
        else{
 	    carafallo();
 	    printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la solución la cual le cuesta 2 monedas:\n");
 	    vidas--;
 	    scanf("%s",respu);
 	    if (strcmp(respu,tienda)==0&&(monedas>0)){
		printf("La solución comprada es: %s\n",respuestas[difi-1].nresp5);
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


//parte 7
		for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[j+i]);
		}
		j=j+tamanoparte[part];
		part++;
		printf("\n");
		printf("Introzuca aqui la respuesta:\n");
        scanf("%s",respu);
        i=0;
        while (i==0&&vidas>0&&partes[saltar]==0){
        if(strcmp(respu,respuestas[difi-1].nresp6)==0){
 	    caraacierto();
 	    i=1;
        }
        else{
 	    carafallo();
 	    printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la solución la cual le cuesta 2 monedas:\n");
 	    vidas--;
 	    scanf("%s",respu);
 	    if (strcmp(respu,tienda)==0&&(monedas>0)){
		printf("La solución comprada es: %s\n",respuestas[difi-1].nresp6);
 		monedas-=2;
 	    i=1;
        }
 	    if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 		printf("No le quedan monedas\n");
 	    } 
        }
        moneda(monedas);
        vida(vidas);
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        }



//parte 8
		for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[j+i]);
		}
		j=j+tamanoparte[part];
		part++;
		printf("\n");
				printf("Introzuca aqui la respuesta:\n");
        scanf("%s",respu);
        i=0;
        while (i==0&&vidas>0&&partes[saltar]==0){
        if(strcmp(respu,respuestas[difi-1].nresp7)==0){
 	    caraacierto();
 	    i=1;
        }
        else{
 	    carafallo();
 	    printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la solución la cual le cuesta 2 monedas:\n");
 	    vidas--;
 	    scanf("%s",respu);
 	    if (strcmp(respu,tienda)==0&&(monedas>0)){
		printf("La solución comprada es: %s\n",respuestas[difi-1].nresp7);
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


//parte 9
		for(i=0;i<tamanoparte[part];i++){
		printf("%c",historia[j+i]);
		}
		j=j+tamanoparte[part];
		part++;
		printf("\n");
		printf("Introzuca aqui la respuesta:\n");
        scanf("%s",respu);
        i=0;
        while (i==0&&vidas>0&&partes[saltar]==0){
        if(strcmp(respu,respuestas[difi-1].nresp8)==0){
 	    caraacierto();
 	    i=1;
        }
        else{
 	    carafallo();
 	    printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la solución la cual le cuesta 2 monedas:\n");
 	    vidas--;
 	    scanf("%s",respu);
 	    if (strcmp(respu,tienda)==0&&(monedas>0)){
		printf("La solución comprada es: %s\n",respuestas[difi-1].nresp8);
 		monedas-=2;
 	    i=1;
        }
 	    if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 		printf("No le quedan monedas\n");
 	    } 
        }
        moneda(monedas);
        vida(vidas);
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        }


//parte 10
		for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[j+i]);
		}
		j=j+tamanoparte[part];
		part++;
		printf("\n");
		printf("Introzuca aqui la respuesta:\n");
        scanf("%s",respu);
        i=0;
        while (i==0&&vidas>0&&partes[saltar]==0){
        if(strcmp(respu,respuestas[difi-1].nresp9)==0){
 	    caraacierto();
 	    i=1;
        }
        else{
 	    carafallo();
 	    printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la solución la cual le cuesta 2 monedas:\n");
 	    vidas--;
 	    scanf("%s",respu);
 	    if (strcmp(respu,tienda)==0&&(monedas>0)){
		printf("La solución comprada es: %s\n",respuestas[difi-1].nresp9);
 		monedas-=2;
 	    i=1;
        }
 	    if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 		printf("No le quedan monedas\n");
 	    } 
        }
        moneda(monedas);
        vida(vidas);
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        }

//parte 11
		for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[j+i]);
		}
		j=j+tamanoparte[part];
		part++;
		printf("\n");
		printf("Introzuca aqui la respuesta:\n");
        scanf("%s",respu);
        i=0;
        while (i==0&&vidas>0&&partes[saltar]==0){
        if(strcmp(respu,respuestas[difi-1].nresp10)==0){
 	    caraacierto();
 	    i=1;
        }
        else{
 	    carafallo();
 	    printf("Vuelva a introducir otra respuesta o introduzca 'tienda' para comprar la solución la cual le cuesta 2 monedas:\n");
 	    vidas--;
 	    scanf("%s",respu);
 	    if (strcmp(respu,tienda)==0&&(monedas>0)){
		printf("La solución comprada es: %s\n",respuestas[difi-1].nresp10);
 		monedas-=2;
 	    i=1;
        }
 	    if ((strcmp(respu,tienda)==0)&&(monedas<=0)){
 		printf("No le quedan monedas\n");
 	    } 
        }
        moneda(monedas);
        vida(vidas);
        printf("Pulse enter para continuar:\n");
        fflush(stdin);
        gets(espacios);
        }

//parte 12
		for(i=0;i<tamanoparte[part];i++){
			printf("%c",historia[j+i]);
		}
		j=j+tamanoparte[part];
		part++;
		printf("\n");    
		fflush(stdin);
		gets(espacios);




//fin 
        if(vidas==0){
        	printf("GAME OVER, %s\n",nombre);
        	printf("GAME OVER %s\n",nombre);
        	printf("GAME OVER %s\n",nombre);
        	printf("Los creadores le vendimos :D \n");
        	printf("Pulse enter para continuar");
            fflush(stdin);
            gets(espacios);
        }



		printf("¿Desea, jugar de nuevo (si/no)?\n");
		for(i=0;i<51;i++){
			printf("\n");
		}
		gets(final);

		if (final[0]=='n'){
			fin=1;
		} else if(final[0]=='s'){
		 	jugadas++;
		 	printf("\n");
		 	printf("Bienvenido de nuevo, %s\n",nombre);
		 	if (jugadas==1){
		 		printf("Por haber jugado honestamente la primera vez, le concedemos una serie de hacks.\n");}
		 		w=0;
		 		while (h==0){
		 			hack();
		 			scanf("%d",&hacks);
		 			switch (hacks){
		 				case 0:
		 					monedas=100;
		 					vidas=100;
		 					h=1;

		 				case 1:
		 					printf("¿Cuántas partes quiere saltar?\n");
                			scanf("%d",&sal);
                			for (i=0;i<sal;i++){
		 		     			printf("Introzuca un numero: (comenzando la primera parte por 0=prólogo)\n");
		 		     			scanf("%d",&saltar);
		 		     			partes[saltar]=1;
				 			}
				 			h=2;

		    			case 2:
		    				monedas=100;
		 					vidas=100;
		 					printf("¿Cuántas partes quiere saltar?\n");
                			scanf("%d",&sal);
                			for (i=0;i<sal;i++){
		 		     			printf("Introzuca un numero: (comenzando la primera parte por 0=prólogo)\n");
		 		     			scanf("%d",&saltar);
		 		     			partes[saltar]=1;
				 			}
				 			h=1;
		    			case 3:
		   	     			printf("Gracias por no usar hacks :D .\n");
		   	     			h=2;
					}
				}
				j=0;
				part=0;
		}
	estadisticas(nombre,100,personaje,100,vidas,monedas);
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
	for(i=0;i<5;i++){
    		if(i==3){
        		printf("| |             EPIC QUEST              | |\n");
		}
		printf("| |                                     | |\n");
	}
	for(i=0;i<6;i++){
		printf("---\t");}
	for(i=0;i<5;i++){
		printf("\n");
	}
	printf("Para poder disfrutar de la experiencia, ponga el programa en pantalla completa\nEn windows con la tecla 'F11' o 'FN'+'F11' en caso de no funcionar la primera\n");
	printf("Pulse enter para comenzar.\n");
	gets(espacios);
	system ("color 1A");
	for(i=0;i<6000;i++){
		printf("->\t");
	}
	printf(" \n");
	printf(" \n");
	system ("color 9E");
}





void intruciones(){
	printf("Las intrucciones y normas son básicas:\n");
	printf("-El jugador ha de ir resolviendo una serie de preguntas para avanzar en la historia.\n");
   	printf("-Se comienza con determinada vida y monedas, según el nivel de dificultad escogido.\n");
  	printf("-Las monedas se pueden utilizar para comprar las soluciones a los acertijos,etc.\n");
  	printf("-No esta permitido hacer trampas, el jugador obtendrá un fichero con sus estadísticas durante el juego.\n");
  	printf("\n");
}

void caraacierto(){
	printf("La solución es correcta\n");
	printf("----------\n");
	printf("|o      o|\n");
    printf("|    L   |\n");
    printf("|    D   |\n");
    printf("----------\n");
    printf("Prosigamos con la aventura\n");
 	printf("\n");
}
void carafallo(){
	printf("La solución es incorrecta\n");
	printf("----------\n");
	printf("|º      º|\n");
    printf("|    C   |\n");
    printf("|    o   |\n");
    printf("----------\n");
 	printf("\n");
}

void hack(){
	printf("¿Quiere activar alguno de estos hacks?\n");
	printf("0=Inmortalidad (vidas y monedas infinitas)\n");
    printf("1=Saltarse alguna parte (Introduzca el numero de la parte)\n");
    printf("2=Ambos\n");
    printf("3=Ninguno\n");
}
void  vida(int vidas){
	char i,j=3;
	printf("\n");
	printf("-Le quedan %d vidas.\n",vidas);
	for (i=0;i<vidas;i++){
		printf("%c\t",j);
	}
	printf("\n");

}
void  moneda(int monedas){
	char i,j=169;
	printf("\n");
	printf("-Le quedan %d monedas.\n",monedas);
	for (i=0;i<monedas;i++){
		printf("%c\t",j);
	}
	printf("\n");

}
void estadisticas(char nombre[],int dimperso,char personaje[],int dimpers,int vidas, int monedas){
	FILE*festadistica;
	festadistica=fopen("ESTADISTICASEPICQUEST.txt","a");
	fprintf(festadistica, "Usuario: %s | Personaje escogido: %s | Vidas restantes: %d |Monedas no utilizadas: %d | ",nombre,personaje,vidas,monedas);
	fclose(festadistica);
}
