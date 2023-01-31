#include <stdio.h>
#include <cs50.h>
int main(void)
{
    // Name declearation and prompt user to input name
    string name = get_string("What's your name?\n");
    // Says hello to the user
    printf("Hello, %s\n", name);
}