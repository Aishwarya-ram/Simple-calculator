#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define note "Please enter valid operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void cube();
void squareroot();
void power();


int main(){
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int choice;
    printf("\n******* Press 0 to quit the program *******\n");
    printf("Enter 1  for Addition \n");
    printf("Enter 2  for Subtraction \n");
    printf("Enter 3  for Multiplication \n");
    printf("Enter 4  for Division \n");
    printf("Enter 5  for Modulus\n");
    printf("Enter 6  for Cube \n");
    printf("Enter 7  for Squareroot \n");
    printf("Enter 8  for Power \n");

    while(1){
    printf("\n\nType the operation you want to perform: ");

    scanf("%d",&choice);

    switch(choice)
    {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    modulus();
                    break;
                case 6:
                    cube();
                    break;
                case 7:
                    squareroot();
                    break;
                case 8:
                    power();
                    break;
                case 0:
                    exit(0);
                default:
                    printf("\n********** %s ***********\n",note);
        }

    }
    return 0;
}

void addition(){
    printf("Type the numbers you want to add: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum of a and b is %d\n",a+b);
}
void subtraction(){
    printf("Type the numbers you want to subtract: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The subtraction of a and b is %d\n",a-b);
}
void multiplication(){
    printf("Type the numbers you want to multiply: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiplication of a and b is %d\n",a*b);
}
void division(){
    printf("Type the numbers you want to divide: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The division of a and b is %f\n",(float)a/(float)b);
}
void modulus(){
    printf("Type the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void cube(){
    double b,p;
    printf("Type the number you want the cube of: ");
    scanf("%lf",&b);
    p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}
void squareroot(){
    double b,s;
    printf("Type the number you want the square root of : ");
    scanf("%lf",&b);
    s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
}
void power(){
    double b,p,e;
    printf("Type the base and the power: ");
    scanf("%lf%lf",&b,&p);
    e=pow(b,p);
    printf("The power is %lf",e);
}
