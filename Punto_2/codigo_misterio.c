#include <stdio.h>

void invertirNumero(int *ref_num) {
    int temp = *ref_num;
    int num_invertido = 0;
    while (temp > 0) {
        num_invertido = (num_invertido * 10) + (temp % 10);
        temp = temp / 10;
    }
    *ref_num = num_invertido;
}

void dividirEnDos(int *ref_num) {
    *ref_num = *ref_num / 2;
}

void agregarSumaDigitos(int *ref_num) {
    int temp = *ref_num;
    int suma_digitos = 0;
    while (temp > 0) {
        suma_digitos = suma_digitos + (temp % 10);
        temp = temp / 10;
    }
    *ref_num = *ref_num + suma_digitos;
}

void procesar_enigma(int *valor_referencia) {
    invertirNumero(valor_referencia);
    dividirEnDos(valor_referencia);
    agregarSumaDigitos(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}