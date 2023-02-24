/*
 This program is used to calculate the eigenvalues and eogenvectors of a 
 real symmetric matrix using Jacobi method
 */


#include<stdio.h>
#include<math.h>
void main()
{
int n,i,j,p,q,flag;
float a[10][10],d[10][10],s[10][10],s1[10][10],s1t[10][10];
float temp[10][10],theta,zero=1e-4,max,pi=3.141592654;
printf("Enter the size of the matrix");
scanf("%d",&n);
printf("Enter the elements row wise ");
for(i = 1;i <= n;i++) for(j = 1; j <= n; j++) scanf("%f", &a[i][j]);
printf("The given matrix is");
for(i = 1;i <= n;i++)
{
for(j = 1; j <= n; j++) printf("%8.5f", a[i][j]); printf("\n");
}
printf("\n");
for(i = 1;i <= n;i++) for(j = 1; j <= n; j++) {
d[i][j]=a[i][j]; s[i][j]=0;
}
for(i = 1;i <= n;i++) s[i][i]=1;
do
{
flag=0;
i=1; j=2; max=fabs(d[1][2]);
for(p = 1; p <= n; p++) for(q = 1; q <= n; q++)
{
if(p!=q)
if(max < fabs(d[p][q]))
{
max=fabs(d[p][q]); i=p; j=q;
}
}
if(d[i][i]==d[j][j]) {
if(d[i][j] > 0) theta=pi/4; else theta=-pi/4;
}
else
{
theta=0.5*atan(2*d[i][j]/(d[i][i]-d[j][j]));
}
for(p = 1; p <= n; p++) for(q = 1; q <= n; q++)
s1[p][q]=0; s1t[p][q]=0;
for(p = 1; p <= n; p++) s1[p][p]=1; s1t[p][p]=1;
s1[i][i]=cos (theta); s1[j][j]=s1[i][i];
s1[j][i]=sin (theta); s1[i][j]=-s1[j][i];
s1t[i][i]=s1[i][i]; s1t[j][j]=s1[j][j];
s1t[i][j]=s1[j][i]; s1t[j][i]=s1[i][j];
for(i = 1;i <= n;i++)
for(j = 1; j <= n; j++){

temp[i][j]=0;
for(p = 1; p <= n; p++) temp[i][j]+=s1t[i][p]*d[p][j];
}
for(i = 1;i <= n;i++)
for(j = 1; j <= n; j++) {
d[i][j]=0;
for(p = 1; p <= n; p++) d[i][j]+=temp[i][p]*s1[p][j];
}
for(i = 1;i <= n;i++)
for(j = 1; j <= n; j++)
{
temp[i][j]=0;
for(p = 1; p <= n; p++) temp[i][j]+=s[i][p]*s1[p][j];
}
for(i = 1;i <= n;i++) for(j = 1; j <= n; j++) s[i][j]=temp[i][j];
for(i = 1;i <= n;i++) for(j = 1; j <= n; j++)
{
if(i!=j) if(fabs(d[i][j] > zero)) flag=1;
}
}
while(flag==1);
printf("The eigenvalues are \n");
for(i = 1;i <= n;i++) printf("%8.5f ",d[i][i]);
printf("\nThe corresponding eigenvectors are \n");
for(j = 1; j <= n; j++)
{
for(i = 1;i < n;i++) printf("% 8.5f,",s[i][j]);
printf("%8.5f\n",s[n][j]);
}
}
