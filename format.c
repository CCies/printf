#include <stdio.h>

int ganzzahl = 10;
double gleitkommazahl = 1.78;
char character = 'H';
char string[] ="Hallo Welt";

int main (){

	printf("Ausgabe einer Ganzzahl:		%i\n",ganzzahl);
	printf("Ausgabe einer Gleitkommazahl:	%.3f\n",gleitkommazahl);
	printf("Ausgabe eines Characters:	%c\n",character);
	printf("Ausgabe eines String:		%s\n",string);
	return 0;
}
