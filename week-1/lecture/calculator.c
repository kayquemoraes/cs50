// Operators, Division with longs, demonstrating type casting

#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    long x = get_long("Set the x: ");

    // Prompt user for y
    long y = get_long("Set the y: ");

    // Divide x by y
    float z = (float) x / (float) y;
    printf("%f\n", z);
}