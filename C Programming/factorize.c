#include<stdio.h>
int  main () {

int i,num,count=0;
printf("enter number:");
scanf("%d",&num);
for(i=1;i<=num;i++) {

if(num%i==0) {
count++;
printf("%d\n",i);
}
}

printf("%d ",count);


return 0;
}
