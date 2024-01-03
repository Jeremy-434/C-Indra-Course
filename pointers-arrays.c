#include <stdio.h>

int main() {

    //*Declaramos un array de 5 indices
    int array[5] = {1,2,3,4,5};

    //! Ahora un apuntador al inicio de la variable 
    int* apuntadorArray = &array[0];

    //* Con esto podemos desplazarnos por el array sin necesidad de conocer su dimension
    while (*apuntadorArray != NULL){
        printf("\n %d",*apuntadorArray);
        apuntadorArray++; //! Se va recorriendo el array por las posiciones 
    }
    

    return 0;
}