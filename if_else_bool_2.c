#include <stdio.h>

int main()
{
    int A, B;
    

    scanf("%d%d", &A,&B);
    if (A>0 || B>0)
	    printf("A or B greater than 0\n");
    else
	    printf("A and B both less than or equal to 0\n");
    return 0;


}
