#include<stdio.h>
int main() {

int i;
printf("Character     ASCII Value\n\n");
for(i=48;i<123;i++) {
    printf("%c %16d\n",i,i);
}
return 0;
}
