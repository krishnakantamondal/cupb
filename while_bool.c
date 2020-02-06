# include <stdio.h>

int main()
{
	int square1,square2, i, j, n,m;

	printf("Enter two integers\n");
	scanf("%d%d", &n, &m);
        
	printf("Number1\tSquare1\tNumber2\tSquare2\n");
	
	i=1;
  j=1;
	while(i<n && j<m)
	{	
	square1 =i*i;
  square2 =j*j;
		printf("%d\t%d\t%d\t%d\n",i,square1, j, square2);
		i++;
    j++;
	}

		return 0;
}
