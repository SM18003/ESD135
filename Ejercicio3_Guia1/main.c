#include <stdio.h>
#include <math.h>

int main() {
    int tamanio;
    printf("Ingrese el tamanio del vector:");
    scanf("%i",&tamanio);
    double vector[tamanio];
    double sumatoria=0;
    double sumatoria2=0;
    double media,varianza,desviacion;
    for (int i = 0; i <tamanio ; ++i) {
        printf("Ingrese el numero %i%s",i+1,":");
        scanf("%lf",&vector[i]);
        sumatoria=sumatoria+vector[i];
    }
    media=sumatoria/tamanio;
    for (int j = 0; j <tamanio ; ++j) {
        sumatoria2=sumatoria2+pow((vector[j]-media),2);
    }
    varianza=sumatoria2/tamanio;
    desviacion=sqrt(varianza);
    printf("Los datos son los siguientes:\n");
    for (int k = 0; k <tamanio ; ++k) {
        printf("%lf%s",vector[k],", ");
    }
    printf("\n");
    printf("Su media es: %lf",media);
    printf("\n");
    printf("Su varianza es: %lf",varianza);
    printf("\n");
    printf("Su desviacion tipica es: %lf",desviacion);
    return 0;
}