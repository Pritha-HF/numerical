#include <stdio.h>
#include <math.h>

float f(float x) {
  return (1/(1+x*x));
}
main() {
  float a,b,h,simp;
  int n,i;
  printf("Enter the value of a,b&h\n");
  scanf("%f%f%d",&a,&b,&n);
  h=(b-a)/n;
  simp=(f(a)+f(b));
  for(i=1;i<n;i+=2) {
    simp=simp+4*f(a+i*h);
  }
  for(i=2;i<n-1;i+=2) {
    simp=simp+2*f(a+i*h);
  }
  simp=simp*h/3;
  printf("The value of integration is %f\n",simp);
}