#include <stdio.h>
#include <stdbool.h>

int main() {

    /*
    Variable  = A reusable container for a value.
                Behaves as if it were the value it contains.
    */

    // integer = whole numbers (4bytes in modern systems)
    int age = 23;
    int debt = -100;

    // float = single-precision decimal number (4 bytes)
    float price = 19.99;
    float temperature = -01.5;

    // double = double-precision decimal number (8 bytes)
    double pi = 3.14159265358979;

    // character = single charecter (1 byte)
    char grade = 'A';

    // String = a array of characters
    char name[] = "Henrique Rocha";
    char food[] = "Pizza";

    // Booleans = true or false (1 byte, requires <stdbool.h>)
    bool isOnline = true;
    
    // integer
    printf("you are %d years old\n", age);
    printf("Your debt is %d\n", debt);

    // float
    printf("The price is %.2f\n", price);
    printf("The temperature is %.1f ºC\n", temperature);

    // double
    printf("Pi value: %.15lf\n", pi);
    
    // character
    printf("Your grade is %c \n", grade);
    
    // String
    printf("Hello %s \n", name);
    printf("Your favorite food is %s \n", food);
    
    // Booleans
    if(isOnline) {
        printf("Hello %s \n", name);
    } else {
        printf("Please login");
    }
    
    
    return 0;
}