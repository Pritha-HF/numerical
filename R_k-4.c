#include <stdio.h>
#include <math.h>
float f(float x, float y){
  return (x+(y*y));
}
main() {
  float x,y,h,X,k1,k2,k3,k4,k;
  int n,i;
  printf("Enter the value of x,y,h,X:\n ");
  scanf("%f%f%f%f",&x,&y,&h,&X);
  n=(X-x)/h;
  for(i=1;i<=n;i++){
    printf("the value of y(%3.2f)=%2.6f\n",x,y);
    k1=h*f(x,y);
    k2=h*f(x+h/2.0,y+k1/2.0);
    k3=h*f(x+h/2.0,y+k2/2.0);
    k4=h*f(x+h,y+k3);
    k=(k1+2.0*k2+2.0*k3+k4)/6;
    y=y+k;
    x=x+h;
  }
  printf("the value of y(%3.2f)=%2.6f\n",x,y);
}