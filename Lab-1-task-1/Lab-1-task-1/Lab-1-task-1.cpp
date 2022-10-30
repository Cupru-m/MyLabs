#include <iostream>
#include <math.h>

int main()
{
    int firstX, firstY, secondX, secondY;
    printf("Enter first coordinats:");
    scanf_s("%d", &firstX);
    scanf_s("%d", &firstY);

    printf("Enter second coordinats:");
    scanf_s(" %d ", &secondX);
    scanf_s(" %d ", &secondY);
    float distance = sqrt((firstX - secondX) * (firstX - secondX) + (firstY - secondY) * (firstY - secondY));
    printf("The distance is %f", distance);

    return 0;
}
