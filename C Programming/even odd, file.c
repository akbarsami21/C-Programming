#include<stdio.h>
#include<stdiolib>
void main() {

FILE *f,*f1,*f2;

f=fopen("data.txt","w");
int n.i,num;

scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",&num);
    fprintf(f,"%d",num);
}

}
