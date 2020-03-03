#include<stdio.h>
#include<math.h> 

int main()
{
 int k=0; //counts number of iterations
 float x1,x0; //x0 is the initial guess
 float eps=0.001; //error tolerance
 float f(float x);
 float f_diff(float x);
 printf("\nEnter the initial guess x0 : ");
 scanf("%f",&x0);
 x1=x0;
 while(1)
 {
 x0=x1;
 k++;
 x1=x0-f(x0)/f_diff(x0);
 printf("One root is %8.5f obtained at %dth iteration\n",x1,k);
 
 if (fabs(x1-x0) < eps)
	 break;
 }
return 0;
}
 
//definition of the function f(x)
float f(float x)
{
 return(x*x);
}
 
//definition of the function fd(x)
float f_diff(float x)
{
 return(2*x);
}
