#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{

    // arithemetic operators = + - * / % ++ --

    // Variables
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double x1 = 0.0;
    double x2 = 0.0;

    printf("Bhaskara Resolver\nA system that solves any quadratic equation.\n");
    printf("\nType the values a, b, c in this equation: ax^2 + bx+ c = 0\n");

    // Input
    printf("a:");
    scanf("%lf", &a);

    printf("b:");
    scanf("%lf", &b);

    printf("c:");
    scanf("%lf", &c);

    // Delta 
    double delta = (b * b) - 4 * a * c;

    // Finding delta quadratic root
    double deltaRoot = sqrt(delta);

    x1 = (-b + deltaRoot) / (2 * a);
    x2 = (-b - deltaRoot) / (2 * a);

    // Output
    printf("\nPossible Values:\nX1 = %lf\nX2 = %lf", x1, x2);

    return 0;
}