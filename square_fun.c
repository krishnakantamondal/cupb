#include <stdio.h>

float fun(float);

int main ()

{
float x;
int y;

printf("Enter a float number\n");
scanf("%f",&x);

printf("Square of float number=%f\n", fun(x));


printf("Enter a integer number\n");
scanf("%d",&y);

printf("Square of integer number=%f\n", fun(y));

return 0;
}



float  fun(float x)
{
float square;

square=x*x;

return square;
}
