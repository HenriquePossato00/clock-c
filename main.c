#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{

    // arithemetic operators = + - * / % ++ --

    // Variables
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; 

    printf("Circle Calculator\n");
    printf("\nType the radius value:\n");

    // Input
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * (PI * pow(radius, 2));
    volume = (4.0 / 3.0) * PI * pow(radius, 3);


    // Output
    printf("Circle Area: %.2lf\n", area);
    printf("Sphere Surface Area: %.2lf\n", surfaceArea);
    printf("Sphere Volume Area: %.2lf\n", volume);
    
    return 0;
}