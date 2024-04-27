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




}