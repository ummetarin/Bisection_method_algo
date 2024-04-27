#include<stdio.h>
#include<conio.h>
#include<math.h>

#define E 0.001

float F(float x){
    return ((x*x*x)-(2*x*x)-4);
}

int main(){

float f0,f1,f2,x0,x1,x2;

do{
    printf(" X1 = ");
    scanf("%f",&x1);
    f1=F(x1);
}while (f1>0);

do{
printf("X2 = ");
scanf("%f",&x2);
f2=F(x2);
}while (f2<0);


do{
    x0=(x1+x2)/2;
    f0=F(x0);
    if(f0*f1<0){
        x2=x0;
        f2=f0;
    }
    else{
        x1=x0;
        f1=f0;
    }


}while (fabs(x2-x1)>E);


printf("root is = %f",x0);




}