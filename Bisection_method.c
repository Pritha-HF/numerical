#include<stdio.h>
#include<math.h>
float f(float x){
    return(x*x*x-9*x+1);
}
main(){
    float a,b,c,e;
    int k=0;

    printf("enter accuracy");
    scanf("%f",&e);

    do{
        printf("\nEnter a&b:");
        scanf("%f%f",&a,&b);
    }while(f(a)*f(b)>0);

    do
    {
        c=(a+b)/2;
        printf("\nk=%d\ta=%f\tb=%f\tc=%f",k,a,b,c);
        if(f(a)*f(c)<0)
            b=c;
        else
            a=c;
        k+=1;
    } while(fabs(f(c))>e);

    printf("\nIteration=%d\troot=%f",k,c);
}