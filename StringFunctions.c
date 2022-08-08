#include <stdio.h>
#include <string.h>

int main(){
    
    char string1[] = "Limones";                   // remember to allocate enough memory to it
    char string2[] = "Laranjes";

    /*
    Windows only! Need to implement manually for Linux.

    //strlwr(string1);                              // converts a string to lowercase
    //strupr(string1);                              // converts a string to uppercase
    //strset(string1, '?');                         // sets all characters of a string to a given character
    //strnset(string1, 'x', 1);                     // sets first n characters of a string to a given character
    //strrev(string1);                              // reverses a string
    //strcmpi(string1, string2);                    // string compare all (ignore case)
    //strnicmp(string1, string2, 1);                // string compare n characters (ignore case)
    */
    
    // strcat(string1, string2);                    // appends string2 to end of string1
    // strncat(string1, string2, 1);                // appends n characters from string2 to string1
    // strcpy(string1, string2);                    // copy string2 to string1
    // strncpy(string1, string2, 4);                // copy n characters of string2 to string1

    // int result = strlen(string1);                // returns string length as int
    // int result = strcmp(string1, string2);       // string compare all characters
    int result = strncmp(string1, string2, 2);   // string compare n characters

    // printf("%s\n", string1);
    printf("%d\n", result);

    (result == 0) ? printf("These strings are the same.\n") : printf("These strings are not the same.\n");

    return 0;
}