// Operators, Division with longs, floating format and variable float z, demonstrating truncation

#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    long x = get_long("Set the x: ");

    // Prompt user for y
    long y = get_long("Set the y: ");

    // Divide x by y
    float z = x /y;
    printf("%f\n", z);
}