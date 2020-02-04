# include <stdio.h>

int main()
{
	int x,y, add, sub, mul, mod;

	float a,b, div;

	x=12;
	y=5;
	

	a=12.0;
	b=5.0;

	add=x+y;
	sub=x-y;
	mul=x*y;
	mod=x%y;


	div=a/b;

	printf("add =  %d\n", add);
	printf("sub =  %d\n", sub);
	printf("mul =  %d\n", mul);
	printf("div =  %f\n", div);
	printf("mod =  %d\n", mod);
return 0;
}
