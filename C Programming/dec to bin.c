#include<stdio.h>
int main() {

int n,i=0,B[32];
scanf("%d",&n);
while(n) {
    B[i++]=n%2;
    n=n/2;

}
for(int j=i-1;j>=0;j--) {
    printf("%d",B[j]);
}
return 0;
}
