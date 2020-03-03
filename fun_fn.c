#include<stdio.h>
int Fn(float x)  // correct the data return type of the function
{
return (4*x) ;
}

int main()
{
float x=2.5;
printf("%f", Fn(x));

}
