#include <stdio.h>

int main()
{
    int marks;
    char ch1;
    
    printf("Enter a Letter: M for Math, P for Physics\n");
    scanf(" %c", &ch1);
    if (ch1=='M')
    
    { 
    printf("You have choosen Math\n");
    printf("\nEnter your Marks in Math in BSc\n");
    scanf(" %d", &marks);
    printf("\nMarks entered= %d\n", marks); 
    if(marks<55) printf("\nNot eligible\n");
    else printf("\nEligible\n");
    }

    else
    if(ch1=='P')
   
    { 
    printf("You have choosen Physics\n");
    printf("\nEnter your Marks in Physics in BSc\n");
    scanf(" %d", &marks);
    printf("\nMarks entered= %d\n", marks); 
    if(marks<55) printf("\nNot eligible\n");
    else printf("\nEligible\n");
    }
    
    else
    printf("Enter M or P\n");
    return 0;

 }

