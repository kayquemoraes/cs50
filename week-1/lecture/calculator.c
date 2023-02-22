// Operators, Addition with long

#include "cs50.h"
#include <stdio.h>

int main(void)
{
    long x = get_long("Set the x: ");
    long y = get_long("Set the y: ");
    printf("The sum between x and y is: %li\n", x + y);
}