#include<stdio.h>
int main () {
int num1,num2,num3;
printf("enter three numbers:");
scanf("%d %d %d",&num1,&num2,&num3);
if(num1>num2 && num1>num3) {
printf("%d is the maximum",num1);
}
else if(num2>num1 && num2>num3) {
printf("%d is the maximum",num2);
}
else if(num3>num1 && num3>num2) {
printf("%d is the maximum",num3);
}
return 0;
}
