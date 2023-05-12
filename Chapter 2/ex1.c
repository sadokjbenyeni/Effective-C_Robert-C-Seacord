#include<stdlib.h>
#include<stdio.h>

void retrieve(int* count)
{
    printf("%d ", *count);
}

int* increment(void)
{
    static unsigned int counter = 0;
    counter++;
    retrieve(&counter);
}

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        increment();
    }
    return 0;
}