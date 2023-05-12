#include <stdio.h>
#include <stdlib.h>

void addition(int a, int b)
{
    printf("Adding %d to %d results: %d\n", a, b, a + b);
}

void substruction(int a, int b)
{
    printf("Substructing %d from %d results: %d\n", b, a, a - b);
}

void multiplication(int a, int b)
{
    printf("Multipliying %d by %d results: %d\n", a, b, a * b);
}

typedef void (*arr_ptr)(int, int);
arr_ptr calculator[3] = {&addition, &substruction, &multiplication};

int main(void)
{
    calculator[0](9, 5);
    calculator[1](14, 7);
    calculator[2](2, 5);
    return EXIT_SUCCESS;
}
