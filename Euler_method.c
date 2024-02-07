#include <stdio.h>
#include <math.h>
float f(float x,float y){
  return((y-x)/(y+x));
}
main(void) {
  float x0,y0,h,xn;
  printf("Enter the value of x0, y0, h, xn\n");
  scanf("%f%f%f%f",&x0,&y0,&h,&xn);
  do{
    printf("the value of y(%f)=%f\n",x0,y0);
    y0=y0+h*f(x0,y0);
    x0=x0+h;
  }while(x0<=xn);
}