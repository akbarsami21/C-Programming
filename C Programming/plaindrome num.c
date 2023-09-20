#include<stdio.h>
int main() {

int num,sum=0,reminder,n;
printf("enter number");
scanf("%d",&num);
n=num;
while(num!=0) {
    reminder=(num%10);
    sum=((sum*10)+reminder);
    num=(num/10);

}
if(sum==n) {
    printf(" %d is plaindrome number",n);
}
else {
    printf("%d it is not plaindrome number",n);
}
return 0;
}
