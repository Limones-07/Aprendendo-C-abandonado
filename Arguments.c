#include <stdio.h>

void birthday(char name[], char age)
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!\n", age);
}

int main()
{
    char name[] = "Limones";
    char age = 14;

    birthday(name, age);

    return 0;
}