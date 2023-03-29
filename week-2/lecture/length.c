// Determines the length of a string using a function

#include "cs50.h"
#include <stdio.h>

int string_length(string s);

int main(void)
{
    // Prompt for user's name
    string name = get_string("Name: ");

    int length = string_length(name);
    printf("%i", length);

    
}

int string_length(string s)
{
    // Count number of characters up until '\0' (aka NUL)
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}