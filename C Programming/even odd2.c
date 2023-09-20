#include<stdio.h>
int  main () {

int i,n,n1,count1=0,count2=0;
printf("enter number:");
scanf("%d",&n);
scanf("%d",&n1);
for(i=n;i<=n1;i++) {
if(i%2==0)
count1++;
else
    count2++;
}

printf("%d %d",count1,count2);


return 0;
}
