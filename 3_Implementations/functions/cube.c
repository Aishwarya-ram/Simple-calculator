#include"simple calculator.h"
void cube(){
    double b,p;
    printf("Type the number you want the cube of: ");
    scanf("%lf",&b);
    p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}
