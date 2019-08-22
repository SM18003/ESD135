#include <stdio.h>

int main() {
    printf("Ingrese el tamanio del vector:");
    int tamanio;
    scanf("%i",&tamanio);
    int vector[tamanio];
    int vector2[tamanio];
    for (int i = 0; i <tamanio ; ++i) {
        printf("Ingrese el numero %i%s",i+1,":");
        scanf("%i",&vector[i]);
        vector2[i]=vector[i];
    }
    printf("Los datos del vector 1 y su copia son:\n");
    for (int j = 0; j <tamanio ; ++j) {
        printf("vector[%i%s%i%s",j,"]=",vector[j],"    ");
        printf("vector2[%i%s%i",j,"]=",vector2[j]);
        printf("\n");
    }
}