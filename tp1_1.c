#include <stdio.h>
int main(){
    printf("Hola Mundo\n");
    int *puntero, apuntado = 1;
    puntero = &apuntado;

    printf("Contenido del puntero: %d\n", *puntero);
    printf("Direccion de memoria almacenada por el puntero: %p\n", puntero);
    printf("Direccion de memoria de la variable: %p\n", &apuntado);
    printf("Direccion de memoria del puntero: %p\n", &puntero);
    
    int tamanio = sizeof(apuntado);

    printf("Tamano de memoria usado por apuntado: %d bytes\n", tamanio);

return 0;
}