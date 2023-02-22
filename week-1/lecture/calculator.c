// Operators, Addition with int

#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int x = get_int("Set the x: ");
    int y = get_int("Set the y: ");
    printf("The sum between x and y is: %i\n", x + y);
}