#include <stdio.h>


int main() {
    int num_polin, grado_max;

    // Aqui se especifica el número de polinomios que se ingresará,
    // asi como su máximo grado
    
    printf("Número de polinomios: ");
    scanf("%d", &num_polin);

    printf("Grado máximo en los polinomios: ");
    scanf("%d", &grado_max);



    // Aqui se crea la matriz en la que se añadiran los coeficientes
    // del polinomio
    
    int matriz_coeficientes[num_polin][grado_max + 1];



    // Aqui se hace que la matriz creada contenga ceros en todas sus posiciones
    
    for (int i = 0; i < num_polin; i++) {
        for (int j = 0; j <= grado_max; j++) {
            matriz_coeficientes[i][j] = 0;
        }
    }



    // Aqui se introducen los valores de los coeficientes de los polinomios
    
    for (int i = 0; i < num_polin; i++) {
        printf("Ingrese los multiplicadores del polinomio %d:\n", i + 1);
        for (int j = grado_max; j >= 0; j--) {
            printf("multiplicador de x^%d: ", j);
            scanf("%d", &matriz_coeficientes[i][j]);
        }
    }
    
    
    
    // Esta es la variable que contendra el resultado de la suma 
    
    int polinomio_resultante[grado_max + 1];



    // Aqui se suman los coeficientes de cada polinomio en funcion de
    // su grado
    
    for (int j = grado_max; j >= 0; j--) {
        polinomio_resultante[j] = 0;
        for (int i = 0; i < num_polin; i++) {
            polinomio_resultante[j] += matriz_coeficientes[i][j];
        }
    }



    // Impresión del polinomio resultante
    
    printf("\nPolinomio resultante:\n");
    for (int j = grado_max; j >= 0; j--) {
        if (polinomio_resultante[j] != 0) {
            printf("%dx^%d ", polinomio_resultante[j], j);
        }
    }
    printf("\n");

    return 0;
}

 
