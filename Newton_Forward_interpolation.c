#include<stdio.h>
#include<math.h>

int main(){
 float x[20], y[20],X,p=1,h,u,d;
 int i,j, n;
  
  printf("Enter number of data:\n");
  scanf("%d", &n);
  printf("Enter the value of X:");
  scanf("%f", &X);  
  printf("Enter data:\n");
  printf("\nx\ty\n");
  for(i = 1; i <= n ; i++){
    scanf("%f%f", &x[i], &y[i]);
  }
  h=x[2]-x[1];
  printf("value of h is %f\n",h);
  u=(X-x[1])/h;
  printf("the value of u is %f\n",u);
  d=y[1];
  for(i=1;i<=n-1;i++){
    for(j=1;j<=n-1;j++){
      y[j]=(y[j+1]-y[j]);
    }
      p=p*(u-i+1)/i;
      d=d+(p*y[1]);
  }
  printf("\nThe value of y(%1.2f) is %3.5f",X,d);
}