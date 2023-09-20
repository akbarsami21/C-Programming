#include<stdio.h>
int main() {

int n,i=0,j,O[32];
scanf("%d",&n);
while(n) {
    O[i++]=n%8;
    n=n/8;

}
for(int j=i-1;j>=0;j--) {
    printf("%d",O[j]);
}
return 0;
}
