#include <stdio.h>
#include "math.h"

int main(){
	int x,y;
	printf("inserisci numero x: ");
	scanf("%d",&x);
	printf("inserisci numero y: ");
	scanf("%d",&y);
	somma(x, y);
	differenza(x, y);
	moltiplicazione(x, y);
	divisione(x, y);
}
