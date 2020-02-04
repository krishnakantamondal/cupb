#include <stdio.h>

int main()
{
    
    char ch1,ch2;
    
    printf("Enter a Letter: M for Math, P for Physics\n");
    scanf(" %c", &ch1);
    if (ch1=='M')
    printf("You have choosen Math\n");
    else
    if(ch1=='P')
    printf("You have choosen Physics\n");
    else
    printf("Enter M or P\n");
    return 0;


 }

