#include <stdio.h>

int main(){

    // switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("Enter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay.\n");
            break;
        case 'D':
            printf("At least it's not an F.\n");
            break;
        case 'F':
            printf("YOU FAILED.\n");
            break;
        default:
            printf("Please enter only valid grades.\n");
    }

    /*
    Just gross (bad practice)

    if(grade == 'A'){
        printf("Perfect!\n");
    }
    else if(grade == 'B'){
        printf("You did good!\n");
    }
    else if(grade == 'C'){
        printf("You did okay.\n");
    }
    else if(grade == 'D'){
        printf("At least it's not an F.\n");
    }
    else if(grade == 'F'){
        printf("YOU FAILED.\n");
    }
    else {
        printf("That's not a valid grade.\n");
    }
    */

    return 0;
}