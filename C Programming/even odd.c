#include<stdio.h>
int  main () {

int i,n,num,count1=0,count2=0;
printf("enter number:");
scanf("%d",&n);
for(i=0;i<n;i++) {
scanf("%d",&num);
if(num%2==0)
count1++;
else
    count2++;
}

printf("%d %d",count1,count2);


return 0;
}
