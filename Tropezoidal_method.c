#include <stdio.h>
#include <math.h>

float f(float x) {
  return cos(x);
}
main() {
  float a,b,h,trap;
  int n,i;
  printf("Enter the value of a,b&h: ");
  scanf("%f%f%f",&a,&b,&h);
  n=(b-a)/h;
  trap=(f(a)+f(b));
  for(i=1;i<n;i++){
    trap=trap+2*f(a+h*i);
  }
  trap=trap*(h/2);
  printf("The value of the integral is %f",trap);
}