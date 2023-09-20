#include<stdio.h>
#include<math.h>
int main () {

int num,sum=0,last_digit,a;
printf("Enter Number:");
scanf("%d",&num);
a=num;
while(a!=0) {
    last_digit=(a%10);
   // sum=(sum+pow(last_digit,3));
   sum=sum+(last_digit*last_digit*last_digit);
    a=a/10;
   }
    if(sum==num) {
        printf("%d is the armstrong number\n",num);
    }
    else {
        printf("%d is the not an armstrong number\n",num);
    }


return 0;
}
