#include<stdio.h>
int main() {

int num,sum=0,a,rev=0;
scanf("%d",num);
a=num;
while(a>0) {
sum+=a%10;
a=a/10;
}
a=sum;

while(a>0) {
rev=(rev*10)+(a%10);
a=a/10;
}
if(rev*sum==num) {
printf("magic number");
}
else {
printf("not a magic number");
}
return 0;
}

