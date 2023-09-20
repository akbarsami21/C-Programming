#include<stdio.h>
int main() {


   int a,b,c;
   printf("enter three number:");
   scanf("%d %d %d",&a,&b,&c);



   if(a>b && a>c)
   {
       printf("%d is the maximum\n",a);
       if(b>c)
       {
           printf("%d is minimum\n",c);
       }

       else{
           printf("%d is minimum\n",b);
       }
   }


      else if(b>a && b>c)
   {
       printf("%d is the maximum\n",b);
       if(a>c)
       {
           printf("%d is minimum\n",c);
       }

       else{
           printf("%d is minimum\n",a);
       }
   }

       if(c>a && c>b)
   {
       printf("%d is the maximum\n",c);
       if(a>b)
       {
           printf("%d is minimum\n",b);
       }

       else{
           printf("%d is minimum\n",a);
       }
   }



    return 0;
}
