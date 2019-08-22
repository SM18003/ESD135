#include <stdio.h>

int main() {

    printf("Ingrese el tamanio del vector:");
    int tamanio;
    scanf("%i",&tamanio);
    int vector[tamanio];
    int n;
    for (int k = 0; k <tamanio ; ++k) {
        printf("Ingrese el numero %i%s",k+1,":");
        scanf("%i",&vector[k]);

    }
    printf("Ingrese la posicion que desee borrar(1-%i%s",tamanio,"):");
    scanf("%i",&n);
    for (int i = n; i <tamanio ; ++i) {
        vector[i-1]=vector[i];
        int vector[tamanio-1];
    }
    printf("El nuevo vector es\n");
    for (int j = 0; j <tamanio-1 ; ++j) {
        printf("vector[%i%s%i",j,"]=",vector[j]);
        printf("\n");
    }
    return 0;
}