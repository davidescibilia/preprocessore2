/*Scrivere un programma che calcola l'area e il perimetro di un cerchio di raggio r facendo
uso della macro PI (definita in math.h) che definisce la costante 3,14159 e di due macro 
AREA(r) e PERIMETRO(r) che effettuano i 2 calcoli*/
#include<stdio.h>
#include<math.h>
#define AREA(r) r*(M_PI)
#define PERIMETRO(r) (2*M_PI*(r))
int main (){
	printf("%f\n",AREA(2));
	printf("%f\n",PERIMETRO(2));
	return 0;
}
