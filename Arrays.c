#include <stdio.h>

int main() 
{
    // array = a data structure that can store many values of some data type.

    double prices[10] = {5.0, 10.0, 15.0, 25.0, 20.0};

    prices[5] = 35.0;

    printf("$%.2lf\n", prices[5]);

    return 0;
}