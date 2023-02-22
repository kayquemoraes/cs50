// Loops, Abstraction with parameterization, Better design with for

#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(3);
}

// Meow Once
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}