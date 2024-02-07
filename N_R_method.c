#include<stdio.h>
#include<math.h>
float f(float x){
    return(x*x*x-9*x+1);
}
float f1(float x){
    return(3*x*x-9);
}

main(){
    float a,b,c,d,e;
    int n=0;

    printf("enter accuracy");
    scanf("%f",&e);

    do{
        printf("\nEnter a&b:");
        scanf("%f%f",&a,&b);
    }while(f(a)*f(b)>0);
    c=a+b/2;
    do
    {
        c=c-(f(c)/f1(c));
        printf("\nk=%d\ta=%f\tb=%f\tc=%f",n,a,b,c);
        n+=1;
    } while(fabs(f(c))>e);

    printf("\nIteration=%d\troot=%f",n,c);
}