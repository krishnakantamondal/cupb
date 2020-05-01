#include<stdio.h>
#include<math.h>
int main()
{

    float E,q,b,m,w,k,x1,xt,A,t,cosw;




    printf("    \n enter k,b,m with k > b^2\n");
    scanf("%f%f%f",&k,&b,&m);
    printf("    \nenter the value of x0 and t\n");
    scanf("%f%f",&x1,t);
    w=sqrt((k/m)-((b*b)/(4*m)));
    printf("%f",w);
    cosw=cos (w);
    printf("%f",cosw);
    q=-(b/(2*m))*t;
    printf("%f",q);
    E=pow(2.71828,q);

    xt=(x1/E)*cosw;
    printf("xt=%f   t=%t",xt,t);

 return 0;

}
