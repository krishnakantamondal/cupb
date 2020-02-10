# include <stdio.h>

int  Pow (int x, int n)
{
	int i, power;
	power=1;
	for (i=0; i<n; i++)
	power *=x;

	return power;
}

int main()
{
	int y,m;
        printf("Eneter y and m\n");
	scanf("%d%d", &y, &m);
	printf("%d^%d =  %d\n",y,m, Pow(y,m));
return 0;
}
