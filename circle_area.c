#include <stdio.h>

/***********
Main function calculates a circle area. It asks a radius as a integer
input and then prints the area as a double.
***********/
int main(int argc, char *argv[])
{
    int radius;
    double area;
    printf("Please enter a radius: ");
    scanf("%i", &radius);
    printf("The given radius is %i\n", radius);

    area = 3.14159 * (radius * radius);
    printf("The area is %f\n", area);

    return 0;
}