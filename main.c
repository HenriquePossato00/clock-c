#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{

    // weitght converter program

    // Variables
    float convertConst = 2.2046;
    float pounds = 0.0;
    float kilograms = 0.0;    
    int choice = 0;

    // Input
    printf("Weitght Converter Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2):");
    
    scanf("%d", &choice);
    
    if (choice == 1) {
        // Kilogram to pounds
        printf("Enter the weight in kilograms:");
        scanf("%f", &kilograms);
        pounds = kilograms * convertConst;

        // Output
        printf("%.2f Kilograms is equal to %.2f Pounds", kilograms, pounds);
    } else if (choice == 2) {
        // Pounds to kilograms
        printf("Enter the weight in pounds:");
        scanf("%lf", &pounds);
        kilograms = pounds / convertConst;
        
        // Output
        printf("%.2f Pounds is equal to %.2f Kilograms", pounds, kilograms);
    } else {
        // Output
        printf("Invalid choice (1 or 2)!");
    }
    
    return 0;
}