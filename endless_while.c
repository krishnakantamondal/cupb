# include <stdio.h>

int main()
{
	int square, i, n;

	printf("Enter an integer\n");
	scanf("%d", &n);
        
	printf("Number \tSquare\n");
	
	i=1;
	while(2)
	{	
	square =i*i;
  i++;

  if (square>200)
  break;
  printf("%d\t%d\n",i,square);
		
	}

		return 0;
}
