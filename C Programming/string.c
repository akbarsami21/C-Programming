#include<stdio.h>
int main() {

/*char str[50];
scanf("%s",str);
printf("%s",str); //space er por input nicche na      */

/*char str[50];
int i;
for(i=0;i<10;i++){
    str[i]=getchar();
}
printf("%s",str); //limitation problem, 10 er besi char input nicche na*/

char str[50];
gets(str);
puts(str); //1 bar enter er por ar input nicche na

return 0;
}
