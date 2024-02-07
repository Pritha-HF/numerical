#include<stdio.h>
#include<math.h>

main()
{
   float x[10], y[10], X, sum=0, prod;
   int i,j,n;
   
   printf("Enter number of point: ");
   scanf("%d", &n);
   printf("Enter interpolation point: ");
   scanf("%f", &X);
   printf("Enter data:\n");
  printf("\nx\ty\n");
   for(i=1;i<=n;i++)
   {
      scanf("%f%f", &x[i],&y[i]);
   }
   
   for(i=1;i<=n;i++){
      prod=y[i];
      for(j=1;j<=n;j++){
         if(j!=i){
            prod = prod* (X - x[j])/(x[i] - x[j]);
         }
      }
      sum = sum + prod;
   }
   printf("Interpolated value at x=%.3f is y=%.3f.", X, sum);
}