#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{

    float price = 10.00;
    int input = 0;
    bool isStudent = false; // 10% discount
    bool isSenior = false;  // 20% discount

    printf("Select your discount:\n");
    printf("1. Student\n");
    printf("2. Senior\n");
    printf("3. Student + Senior\n");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        isStudent = true;
        break;
    case 2:
        isSenior = true;
        break;
    case 3:
        isStudent = true;
        isSenior = true;
        break;
    default:
        break;
    }

    if (isStudent)
    {
        if (isSenior)
        {
            printf("You get a student discout of 10%\n");
            printf("You get a senior discout of 20%\n");
            price *= 0.7;
        }
        else
        {
            printf("You get a student discout of 10%\n");
            price *= 0.9;
        }
    }
    else
    {
        if (isSenior)
        {
            printf("You get a senior discout of 20%\n");
            price *= 0.8;
        }
    }

    printf("The price of a ticket is: $%.2f\n", price);

    return 0;
}