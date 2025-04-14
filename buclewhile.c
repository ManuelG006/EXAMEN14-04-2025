#include <stdio.h>
int main() {
	int numero;
	int c = 0;
	while(1) {
	   printf("Ingresar número entero? ");
	   scanf("%d", &numero);
	   
	   if(numero == -1) break;
	   
	   c++;
	   
	   

	}
	printf("Total de numeros ingresados: %d", c); 
	
	return 0;
}