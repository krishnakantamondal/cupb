#include <stdio.h>

int main()
{
int x,y,z, n=3;
printf("x\ty\tz\n");
x=0;
while(x<n)
{
y=0;
while(y<=n)

{ 
z=x*x*x + 2*x*x + y*y*y;
printf("%d\t%d\t%d\n", x,y,z);
y++ ;
}
x++;
}
return 0;
}


		
