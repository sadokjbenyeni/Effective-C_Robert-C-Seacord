#include <stdio.h>
#include <stdlib.h>

int absolute_value(int a)
{
    if (a < 0)
    {
        if (a == INT_MIN)
        {
            printf("Maximum value was surpassed.");
            return EXIT_FAILURE;
        }
        return -a;
    }
    return a;
}