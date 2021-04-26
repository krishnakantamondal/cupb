#include <stdio.h>

int main()
{
int i, n, fact;

printf("Enter an integer\n");
scanf("%d",&n);
fact=1;
for (i=1;i<=n;i++)

{
fact *=i;
}
printf("Factorial of %d is = %d", n, fact);

return 0;

}
