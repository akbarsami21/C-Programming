#include<stdio.h>
#include<stdlib.h>
void main() {

FILE *fp;
char read[100];
fp=fopen("puc.txt","r");

fgets(read,100,fp);
printf("%s\n ",read);
fclose(fp);


}
