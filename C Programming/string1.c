#include<stdio.h>
#include<string.h>

void main() {

char str1[20],str2[20];
printf("Enter String:");
gets(str1);

strcpy(str2,str1);
puts(str2);
}
