// Online C compiler to run C program online
#include <stdio.h>

int arr1[4][2][2], counterValue;
int *pointer;

void main()
{
    pointer = &arr1[0][0][0];
    counterValue = 0;

    int total_size = sizeof(arr1);
    int element_size = sizeof(arr1[0][0][0]);
    int length = total_size / element_size;
    int size_first_dimension = sizeof(arr1) / sizeof(arr1[0]);        // Tamaño de la primera dimensión
    int size_second_dimension = sizeof(arr1[0]) / sizeof(arr1[0][0]); // Tamaño de la segunda dimensión
    int size_third_dimension = sizeof(arr1[0][0]) / sizeof(arr1[0][0][0]); // Tamaño de la tercera dimensión

    // printf("size_first_dimension of: %d\n", size_first_dimension);
    // printf("size_second_dimension of: %d\n", size_second_dimension);
    // printf("size_third_dimension of: %d\n", size_third_dimension);
    // printf("La longitud del array es: %d\n", length);

    int size_each_dimension = size_second_dimension * size_third_dimension;


    for (int l = 0; l < size_first_dimension; ++l)
    {
        for (int m = 0; m < size_second_dimension; ++m)
        {
            for (int n = 0; n < size_third_dimension; ++n)
            {
                arr1[l][m][n] = counterValue;
                counterValue += 2;
            }
        }
    }

    int a = *(pointer + 4);
    int b = *(pointer + 16);
    int c = *(pointer + 23);

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    printf("The value of c is: %d\n", c);

    for (int l = 0; l < size_first_dimension; ++l)
    {
        for (int m = 0; m < size_second_dimension; ++m)
        {
            for (int n = 0; n < size_third_dimension; ++n)
            {
                printf("[%d]", arr1[l][m][n]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // pointer = &arr1[0][0][0];

    for (int count = 0; count < length; count++)
    {

        if (count < size_each_dimension)
        {
            *(count + pointer) = 4 * (count + 1);
        }
        if (count >= size_each_dimension && count <= (size_each_dimension * 2))
        {
            *(count + pointer) = 6 * (count - (size_each_dimension-1));
        }
        if (count >= (size_each_dimension * 2) && count <= (size_each_dimension * 3))
        {
            *(count + pointer) = 7 * (count - (size_each_dimension*2-1));
        }
        if (count >= (size_each_dimension * 3) && count <= (size_each_dimension * 4))
        {
            *(count + pointer) = 5 * (count - (size_each_dimension*3-1));
        }

    }

    printf("Multiples of 4, 6, 7, 5\n\n");

    for (int l = 0; l < size_first_dimension; ++l)
    {
        for (int m = 0; m < size_second_dimension; ++m)
        {
            for (int n = 0; n < size_third_dimension; ++n)
            {
                printf("[%d]", arr1[l][m][n]);
            }
            printf("\n");
        }
        printf("\n");
    }
}