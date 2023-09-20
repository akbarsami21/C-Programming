#include<stdio.h>
#include<stdlib.h>
void main() {

FILE *f,*f1,*f2;

/*f=fopen("data.txt","w");
int n,i,num;

scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",&num);
    fprintf(f,"%d",num);
}
fclose(f);*/
int n,i,num;
f2=fopen("odd.txt","w");
f1=fopen("even.txt","w");
f=fopen("data.txt","r");
scanf("%d",&n);

for(i=0;i<n;i++) {

    fscanf(f,"%d",&num);
    if(num%2==0){
        fprintf(f1,"Even %d",num) ;
    }
    else
    fprintf(f2,"Odd %d",num);
}






}
