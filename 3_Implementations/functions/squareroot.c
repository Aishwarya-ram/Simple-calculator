#include"simple calculator.h"
void squareroot(){
    double b,s;
    printf("Type the number you want the square root of : ");
    scanf("%lf",&b);
    s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
}
