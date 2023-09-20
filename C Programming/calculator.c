#include<stdio.h>
int main() {

float num1,num2;
char op;
printf("Enter Two number:");
scanf("%f %f",&num1,&num2);
printf("Choose Operator(+,-,*,/): ");
scanf(" %c",&op);
switch(op) {

case '+' :printf("%.2f",num1+num2); break;
case '-' :printf("%.2f",num1-num2); break;
case '*' :printf("%.2f",num1*num2); break;
case '/' :printf("%.2f",num1/num2); break;
}
return 0;
}
