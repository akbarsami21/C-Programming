#include<stdio.h>
int main() {

int n,i=0,H[32];
scanf("%d",&n);

while(n) {
    H[i++]=n%16;
    n=n/16;

}
for(int j=i-1;j>=0;j--) {
    printf("%d",H[j]);

}
return 0;
}

