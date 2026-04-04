#include <stdio.h>

int numCuadrado(int num);
void cuadradoNumero(int *num);
void mostrarVariable(int variable);
void invertir(int a, int b);
void orden(int a, int b);


int main(){
int a=5,b=3;
printf("Variable a inicial: %d\n", a);
printf("Variable b inicial: %d\n", b);

int cuadrado = numCuadrado(a); //pasaje de parametros por valor (se crea una copia de la variable a y se almacena en cuadrado)

cuadradoNumero(&b);     //pasaje de parametros por referencia (cambia el valor de la variable original)

invertir(a,b);
orden(a,b);


return 0;
}

int numCuadrado(int num){
    num*=num;
return num;
}

void cuadradoNumero(int *num){
    *num *= *num;
}

void mostrarVariable(int variable){
    printf("Direccion de memoria de la variable: %p\n", &variable);
    printf("Contenido de la variable: %d\n", variable);
}

void invertir(int a, int b){
    int temporal = a;
    a = b;
    b = temporal;
    printf("Variable a: %d\n", a);
    printf("Variable b: %d\n", b);
}

void orden(int a, int b){

    if(b<a){
        int temporal = a;
        a = b;
        b = temporal;
    }

    printf("Valor menor(a): %d\n", a);
    printf("Valor mayor(b): %d\n", b);

}

