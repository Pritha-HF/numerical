#include <stdio.h>
#include <math.h>
main()
{
  float x[10],y[10],X,p=1,u,h,d;
  int n,i,j;
  printf ("\n Enter the number of points:");
  scanf ("%d",&n);
  printf ("\n Enter the value of x&y:");
  printf ("\n x \t y=f(x)");
  for (i=1;i<=n;i++)
  scanf ("%f%f",&x[i],&y[i]);
  printf ("Enter the value of X at y required:");
  scanf ("%f",&X);
  h=x[2]-x[1];
  u=(X-x[n])/h;
  d=y[n];
  for (i=1;i<=n-1;i++)
  {
    for (j=n;j>=i+1;j--)
    {
      y[j]=y[j]-y[j-1];
    }
    p=p*(u+i-1)/i;
    d=d+p*y[n];
  }
    printf ("\n The required result is = %f at x=%f",d,X);
  
}