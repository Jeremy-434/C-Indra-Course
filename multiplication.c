#include <stdio.h>

void multiplication();
void printArrayValues();
int array[5][4], *pointer;
const int TOTAL_SIZE = sizeof(array);
const int ELEMENT_SIZE = sizeof(array[0][0]);
const int ARRAYLENGTH = TOTAL_SIZE / ELEMENT_SIZE;
const int SIZE_FIRST_DIMENSION = sizeof(array) / sizeof(array[0]);
const int SIZE_SECOND_DIMENSION = sizeof(array[0]) / sizeof(array[0][0]);

int main()
{
    pointer = &array[0][0];

    for (int i = 0; i < SIZE_FIRST_DIMENSION; i++)
    {
        for (int x = 0; x < SIZE_SECOND_DIMENSION; x++)
        {
            printf("Set the values of Array: ");
            scanf("%d", &array[i][x]);
        }
    }

    printf("\n\nValues of Array: \n\n");
    printArrayValues();

    multiplication();

    printf("\n\nValues of Multiplication\n\n");
    printArrayValues();

    return 0;
}

void multiplication()
{

    for (int count = 0; count < ARRAYLENGTH; count++)
    {
        if (count < SIZE_SECOND_DIMENSION || count >= (SIZE_SECOND_DIMENSION * 2) && count < (SIZE_SECOND_DIMENSION * 3) || count >= (SIZE_SECOND_DIMENSION * 4) && count < (SIZE_SECOND_DIMENSION * 5))
        {
            pointer[count] *= 2;
        }
        if (count >= SIZE_SECOND_DIMENSION && count < (SIZE_SECOND_DIMENSION * 2) || count >= (SIZE_SECOND_DIMENSION * 3) && count < (SIZE_SECOND_DIMENSION * 4))
        {
            pointer[count] *= 3;
        }
    }

    // * Even of each value ->
    // for (int i = 0; i < 5; i++){
    //     for (int x = 0; x < 4; x++){
    //         printf("[%d]", array[i][x]);
    //         if(array[i][x] % 2 == 0){
    //             printf("Is Even - ");
    //             array[i][x] *= 2;
    //         }
    //         else {
    //             printf("Is Odd - ");
    //             array[i][x] *= 3;
    //         }
    //         printf("Now: ");
    //         printf("[%d]", array[i][x]);
    //         printf("\n");
    //     }
    //     printf("\n");
    // }
}

void printArrayValues()
{
    for (int i = 0; i < SIZE_FIRST_DIMENSION; i++)
    {
        for (int x = 0; x < SIZE_SECOND_DIMENSION; x++)
        {
            printf("[%d]", array[i][x]);
        }
        printf("\n");
    }
}