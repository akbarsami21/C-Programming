#include<stdio.h>
#include<stdlib.h>
void main()  {
/*FILE *fp;
char s[100];
fp=fopen("puc.txt","r");
fgets(s,30,fp);
puts(s);*/

/*FILE *fp;
char ch;
fp=fopen("data.txt","w");
while((ch=getchar())!='.') {

    fputc(ch,fp);
}*/

FILE *fp,*fp1, *fp2;
char ch;
fp=fopen("data.txt","r");

fp1=fopen("vowel.txt","w");

fp2=fopen("consonant.txt","w");


while((ch=fgetc(fp))!=EOF) {
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    fputc(ch,fp1);
//else if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122) ) fputc(ch,fp2);
else fputc(ch,fp2);
}
fclose(fp);
fclose(fp1);
fclose(fp2);
}
