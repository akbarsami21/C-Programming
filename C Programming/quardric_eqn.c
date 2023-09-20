#include<stdio.h>
#include<math.h>
int main () {

int a,b,c,D;
float m,n;
printf("enter value:");
scanf("%d %d %d",&a,&b,&c);
D=(pow(b,2)-4*a*c);
if(D<0) {

    printf("Imaginary part");
}
else if(D==0) {

  m=-b/(2*a);
  printf("Root=%.2f",m);
}
else if(D>0) {

    m=(-b+ sqrt (pow(b,2)-4*a*c)/(2*a));
    n=(-b-sqrt (pow(b,2)-4*a*c)/(2*a));

    printf("x1= %.2f\n x2= %.2f\n",m,n);

}
else {

    printf("wrong");
}
return 0;
}
