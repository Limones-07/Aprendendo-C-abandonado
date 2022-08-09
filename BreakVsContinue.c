#include <stdio.h>

int main()
{
    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a loop/switch

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        printf("%d\n", i);
    }
    
    printf("---\n");

    for (int i = 1; i <= 46290; i++)
    {
        printf("%d\n", i);
        if (i == 7)
        {
            break;
        }
    }

    return 0;
}