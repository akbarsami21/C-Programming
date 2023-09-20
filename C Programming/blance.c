#include<stdio.h>
int main() {
float blance;
printf("Enter Blance;");
scanf("%f",&blance);
float m,n,i,j;
if(blance>5000)
{

    m=((blance*5)/100);
    n=(blance+m);
    printf("The Final Blance For Female= %.2f",n);
}
else {
    i=(blance * 2)/100;
    j=(blance+i);
    printf("total blance= %.2f",j);
}

return 0;
}
