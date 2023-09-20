#include<stdio.h>
int main ()
{
float marks,marks1;
printf("Enter Sp and Spl Marks: ");
scanf("%f %f",&marks,&marks1);
if(marks<60 || marks1<60)
{
    printf("Fail");
}
else
{
printf("Pass");
}

return 0;

}
