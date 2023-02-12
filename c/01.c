#include <stdio.h>
#include <cs50.h>

int main()
{   
    string man;

    printf("Whats Your Name? ");
    scanf("%s", man);
    
    printf("Hello, %s \n", man);

    return 0;
}