#include <stdio.h>
#include <math.h>

void referenceFunc(int *pointerX, int *pointerY);

void main()
{

    int x, y;

    printf("Digite valor de x: ");
    scanf("%d", &x);
    printf("Digite valor de y: ");
    scanf("%d", &y);

    referenceFunc(&x, &y);

    printf("Pointer X: %d\n", x);
    printf("Pointer y: %d\n", y);
}

void referenceFunc(int *pointerX, int *pointerY)
{
    int squareValue;
    squareValue = pow(*pointerX, *pointerY);
    *pointerY = squareValue / *pointerX;
    *pointerX = squareValue;
};