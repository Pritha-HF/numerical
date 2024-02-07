#include <stdio.h>
#include <math.h>
float f(float x,float y){
  return (1/x*x)-(y/x);
}
main() {
  float x0,y0,xn,h,x,x1,y,y1,y11,y12,e;
  printf("Enter the value of x0&y0\n");
  scanf("%f%f",&x0,&y0);
  printf("Enter the value of xn\n");
  scanf("%f",&xn);
  printf("Enter the value of h\n");
  scanf("%f",&h);
  printf("Enter the value of e\n");
  scanf("%f",&e);
  x1=x0+h;
  y1=y0+h*f(x0,y0);
  do{
    printf("\nthe value of y(%f)=%f",x0,y0);
    y11=y0+(h*(f(x0,y0)+f(x1,y1))/2.0);
    do{
      y12=y0+(h*(f(x0,y0)+f(x1,y11))/2.0);
    }while(fabs(y1-y11)>e);
    y0=y12;
    x0=x0+h;
  }while(x0<=xn);
}