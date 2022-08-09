#include <stdio.h>

int main() 
{
    // array = a data structure that can store many values of some data type.

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

    printf("%d bytes.\n", sizeof(prices));
    // number of elements = sizeof(array) / size in bytes of the data type 
    // ex. double = 8 bytes -> number of elements = sizeof(array of doubles) / 8
    // to get the size in bytes of the data type use sizeof(array[0])
    // it will get the size of the element in bytes
    // so a universal formula for the amount of elements in a array would be
    // number of elements = sizeof(array)/sizeof(array[0])

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }
    

    return 0;
}
