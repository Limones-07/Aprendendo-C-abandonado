#include <stdio.h>

int main()
{
    // while loop = checks a condition, THEN executes the code if the condition is true
    // do while loop = always execute a block of code once, THEN checks for a condition

    int number = 0;
    int sum = 0;

    do
    {
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }
    } while (number > 0); 

    printf("Sum: %d\n", sum);
    
    return 0;
}