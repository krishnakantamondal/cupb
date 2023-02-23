#include<stdio.h>
int main() 
{
    int a[50][50], b[50][50], c[50][50], n, i, j, k;

    printf("Enter the value of N (N <= 50): ");
    scanf("%d", & n);
    printf("Enter the elements of Matrix A one by one: \n");

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    printf("Enter the elements of Matrix B one by one: \n");

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) {
            scanf("%d", & b[i][j]);
        }
    }

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
	printf("\n");
    }
    return 0;
}
