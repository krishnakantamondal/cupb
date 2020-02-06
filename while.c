# include <stdio.h>

int main()
{
	int square, i, n;

	printf("Enter an integer\n");
	scanf("%d", &n);
        
	printf("Number \tSquare\n");
	
	i=1;
	while(i<=n)
	{	
	square =i*i;
		printf("%d\t%d\n",i,square);
		i++;
	}

		return 0;
}
