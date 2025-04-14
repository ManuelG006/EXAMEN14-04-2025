#include <stdio.h>

int main() {
	int numero;
	int resultado;
	
	do {
       printf("Ingresa un numero del 1 al 7 ?");
	   resultado = scanf("%d", &numero);	
	   
	   if(!(resultado >= 1 && resultado <= 7)) {
		  printf("Entrada Incorrecta. Ingresa un numero valido.\n" );
	   }
	       while (getchar() != '\n');
	}while(!(numero >= 1 && numero <= 7));
	
	if(numero == 1) {
	   printf("Hoy es lunes\n");
	} else if(numero == 2) {
	   printf("Hoy es martes\n");
	} else if(numero == 3) {
	   printf("Hoy es miercoles\n");
	} else if(numero == 4) {
	   printf("Hoy es jueves\n");
	} else if(numero == 5) {
	   printf("Hoy es viernes\n");
	} else if(numero == 6) {
	   printf("Hoy es sabado\n");
	} else if(numero == 7) {
	   printf("Hoy es domingo\n");
	} 
	
	
	return 0;
}