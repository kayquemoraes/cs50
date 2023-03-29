// Determines the length of a string

#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // Prompt for user's name
    string name = get_string("Name: ");

    // Count number of characters up until '\0' (aka NUL)
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }

    printf("%i\n", i);
}