#include<stdio.h>
#include<string.h>

void main() {

int a;
char str1[20],str2[20];
printf("enter two string:");
gets(str1);
gets(str2);

a=strcmp(str1,str2);
if(a==0)
    printf("both are same");
else if(a>0)
    printf("str1 is grater");
else
    printf("str2 is greater");

}
