#include<stdio.h>
#include<math.h>
#define pi 3.14159265
 int main()
{
//d=velocity,q=charge,b=magnetic_field,o=angle,t1= time, 
//x,y= position,f=force,t=time_period,m=mass,r=radius

  double o=90.0,v,s,b,q,d,w,f,t,r,m;
  double t1=1.0,i;
  int k=0;
  double x[300],y[300];
  v=pi/180.0;
  s=sin(o*v);
  printf("\n Enter the magnetic field in tesla : ");
  scanf("%lf",&b);
  printf("\n Enter the charge in Coulomb :");
  scanf("%lf",&q);
  if(q<0)
  {
        i=-1*q;
  }
  else
          i=q;
  printf("\n Enter the velocity in m/s :");
  scanf("%lf",&d);
  printf("\n Enter the mass in kg:");
  scanf("%lf",&m);
  f=q*d*b*s;
  printf("\n Magnetic Force=%.3e Newton",f);
  r=(m*d)/(b*q);
  printf("\n Radius of circular motion:%.3e Meter",r);
  w=(b*q)/m;
  printf("\n Angular velocity :%.3e Meter per Sec",w);
  t=(2*pi)/w;
  printf("\n Time period :%.3e Sec\n ",t);
  printf("\n Position of Particle is: \n");
  printf("\tx: \t\ty: \t\ttime\n");
  for(int j=0;j<300;j++)
  {
   
  x[k]=(r*sin(w*t1));
  y[k]=((q/i)*r*cos(w*t1));

  printf("\t%lf \t%lf \t%lf\n",x[k],y[k],t1);
  t1++;
  k++;
  }
  return 0;


}


