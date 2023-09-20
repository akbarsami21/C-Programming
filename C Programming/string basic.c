#include<stdio.h>
#include<string.h>
void main() {
int i,letter=0,cap=0,sm=0,digit=0,sp=0,s=0;
char str[1000];
gets(str);

for(i=0;i<strlen(str);i++){
if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)) {
letter++;
if((str[i]>=65 && str[i]<=90) ) cap++;
else sm++;
}
else if(str[i]>=48 && str[i]<=57) digit++;
else if(str[i]==' ') sp++;
else s++;

}
}
