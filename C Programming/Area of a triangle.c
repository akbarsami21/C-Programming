#include<stdio.h>
#include<math.h>
int main() {
float a,b,c,s,A;
printf("Enter a b & c value: ");
scanf("%f%f%f",&a,&b,&c);
s=((a+b+c)/2);
A= sqrt (s*(s-a)*(s-b)*(s-c));
printf("Area of tirangle= %.2f",A);
return 0;
}
