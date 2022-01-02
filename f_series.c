/* 
Fourier series of step function
in the range -pi to pi
*/

#include <stdio.h>
#include<math.h> 
#define pi 3.141
float f(float, int);
int main()
{
	int j,m,p,n,q=20;
	float x[2*q+1], step;
	step=3.141/q;
	x[0]=-3.141;
	printf("Enter number of terms ");
	scanf("%d", &n);
	for (j=1;j<=q;j++)
	{
	x[j]=x[j-1]+step;
	}
	for (p=1;p<=q;p++)
	{
	x[q+p]=x[q-1 + p]+step;
	}
	for (m=1; m<2*q; m +=1)

	{
	printf("%f %f \n", x[m], f(x[m],n));
	}
return 0;
}
// Calculate the fourier coefficients

float f(float x, int n)
{
int i ;
float sum;
sum=0;
for (i=1; i<=n; i +=2)

{
sum=sum+(2/pi)*(sin(i*x)/i);
}
return 0.5-sum;

}
