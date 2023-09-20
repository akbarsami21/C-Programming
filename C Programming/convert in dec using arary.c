#include<stdio.h>
#include<math.h>
int main() {

int n,i,sum=0,a[10];
scanf("%d",&n);
for(i=0;n>0;i++){
a[10]=n%10;
n=n/10;

}
n=i;
for(i=0;i<n;i++) {
sum=sum+a[i]*pow(2,i);
}
printf("%d",sum);
return 0;
}
