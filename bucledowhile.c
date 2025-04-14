#include <stdio.h>
#include <string.h>
int main() {
char contraseña[] = "Ex47h6"; 
char input[50];

do {
    printf("Ingrese la contraseña: \n");
    scanf("%s", input);
    
    printf("Contraseña Incorrecta. \n");
    
}while(strcmp(contraseña, input) != 0);

printf("Contraseña correcta");

return 0;
}