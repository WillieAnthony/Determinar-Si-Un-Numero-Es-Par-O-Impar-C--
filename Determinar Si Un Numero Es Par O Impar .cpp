// Codigo en lenguaje C++ solicita al usuario que ingrese un numero entero, luego verifica si el numero es par o impar y muestra el resultado en pantalla.



#include <stdio.h>

int main() {
    int num;
    
    // Solicitar al usuario que ingrese un numero
    printf("Ingrese un Numero Entero: ");
    scanf("%d", &num);
    
    // Verificar si el numero es par o impar
    if (num % 2 == 0) {
        printf("\n\nEl Numero %d es Par.\n\n\n\n\n", num);
    } else {
        printf("\n\nEl Numero %d es Impar.\n\n\n\n\n", num);
    }
    
    printf("30/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}
