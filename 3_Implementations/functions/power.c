#include"simple calculator.h"
void power(){
    double b,p,e;
    printf("Type the base and the power: ");
    scanf("%lf%lf",&b,&p);
    e=pow(b,p);
    printf("The power is %lf",e);
}
