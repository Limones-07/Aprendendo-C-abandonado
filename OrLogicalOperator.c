#include <stdio.h>
#include <stdbool.h>

int main() {

    // logical operators = || (OR) check if at least one condition is true

    float temp = 25;

    if (temp <= 0 || temp >= 30){
        printf("The weather is bad!\n");
    }
    else {
        printf("The weather is good!\n");
    }

    return 0;
}