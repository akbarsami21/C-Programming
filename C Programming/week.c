#include<stdio.h>
int main() {

int num;
printf("enter a number(1-7): ");
scanf("%d",&num);
switch(num) {
case 1:printf("saturday"); break;
case 2:printf("sunday"); break;
case 3:printf("monday"); break;
case 4:printf("tuesday"); break;
case 5:printf("wednessday"); break;
case 6:printf("thursday"); break;
case 7:printf("friday"); break;
default: printf("You Type Wrong");
}
return 0;
}
