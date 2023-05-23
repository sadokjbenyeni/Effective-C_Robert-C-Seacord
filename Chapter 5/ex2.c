#include <stdlib.h>
#include <stdio.h>

size_t find_element(size_t len, int arr[], int key)
{
    size_t pos = (size_t)-1;
    // traverse arr and search for key
    for (size_t i = 0; i < len; ++i)
    {
        if (arr[i] == key)
        {
            pos = i;
            break; // terminate loop
        }
    }
    if(pos == (size_t)-1) printf("The key was not found");
    return pos;
}