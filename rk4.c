#include <stdio.h>


main()
{
	int i,n;
	float x,y,xp,h,m1,m2,m3,m4;
	float func(float,float);
	printf("\n Solution by 4th Order RK Method\n\n");

/* Input initial data */

	printf("\nInput initial vaues of x and y \n");
	scanf("%f %f",&x,&y);
	printf("Input x at which y is required\n");
	scanf("%f", &xp);
	printf("input the step-size(h)\n");
	scanf("%f", &h);
	
	n= (int) ((xp-x)/h+0.5); /* check why 0.5 is added */


/* compute y at each step */

	printf("\n");
	printf("------------------------------------------\n");
	printf("   step         x 	       y \n");
	printf("------------------------------------------\n");

	for(i=1;i<=n;i++)
	{
		m1=func(x,y);
		m2=func(x+0.5*h, y+0.5*h*m1);
		m3=func(x+0.5*h, y+0.5*h*m2);
		m4=func(x+h, y+h*m3);
		x = x+h;
		y = y  + ((m1+2*m2+2*m3+m4)*h)/6.0 ;
		printf("%5d %15.6f %15.6f \n", i, x, y);
	}
	printf("------------------------------------------\n");

	printf("\n Value of y at x = %f is %f\n", xp, y);
	

}

/* Subroutine func */

float func(float x, float y)

{
	float f;
	f = x*x +y*y ;

	return f;

}










