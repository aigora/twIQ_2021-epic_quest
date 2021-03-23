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

#define N 1000

int main(){
//función para poder implimir tildes, acentos y ñ
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
printf("Para poder disfrutar de la experiencia, ponga el programa en pantalla completa\nEn windows con la tecla 'F11' o 'FN'+'F11' en caso de no funcionar la primera\n");
printf("Pulse enter para comenzar.\n");
gets(espacios);
system ("color 1A");
for(i=0;i<6000;i++){
printf("->\t");}
printf(" \n");
printf(" \n");
system ("color 9E");

printf("Bienvenido, introduzca su nombre:\n");
for(i=0;i<51;i++){
printf("\n");}
gets(nombre);
for(i=0;i<100;i++){
printf("\n");}
do{
printf("Escoja que personaje quiere ser:\n\n\n");

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
printf("\n");}
gets(personaje);






printf("¿Desea, jugar de nuevo (si/no)?\n");
for(i=0;i<51;i++){
printf("\n");}
gets(final);

if (final[0]=='n'){
fin=1;}
else if(final[0]=='s'){
printf("\n");
printf("Bienvenido de nuevo, %s",nombre);
}
}
while(fin==0);
return 0;
}
