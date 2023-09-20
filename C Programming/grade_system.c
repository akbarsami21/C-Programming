#include<stdio.h>
int main() {

float marks;
printf("enter marks=");
scanf("%f",&marks);
if(marks>=80 && marks<=100)
{
    printf("cgpa=4.00\n grade=A+\n");
}
else if(marks>=75 && marks<80)
{
    printf("cgpa=3.75\n grade=A\n");
}

else if(marks>=70 && marks<75)
{
    printf("cgpa=3.50\n grade=A-\n");
}
else if(marks>=65 && marks<70)
{
    printf("cgpa=3.25\n grade=B+\n");
}

else if(marks>=60 && marks<65)
{
    printf("cgpa=3.00\n grade=B\n");
}

else if(marks>=55 && marks<60)
{
    printf("cgpa=2.75\n grade=B-\n");
}


else if(marks>=50 && marks<55)
{
    printf("cgpa=2.50\n grade=C+\n");
}
else if(marks>=45 && marks<50)
{
    printf("cgpa=2.25\n grade=C\n");
}
else if(marks>=40 && marks<45)
{
    printf("cgpa=2.00\n grade=D\n");
}
else if(marks<40)
{
    printf("cgpa=0.00\n grade=F\n ");
}


return 0;
}
