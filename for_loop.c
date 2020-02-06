# include <stdio.h>

int main()
{
	int factorial, i, n;

	printf("Enter an integer\n");
	scanf("%d", &n);

	factorial=1;
	for (i=1; i<=n; i +=1)

	{
	
		factorial *=i;
	}

	printf("Factorial of %d is %d\n",n,factorial);
		return 0;
}
