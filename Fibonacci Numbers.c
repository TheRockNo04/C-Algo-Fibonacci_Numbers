#include<stdio.h>
int main()
{
 int a=0,b=1,c=1,count,i=1;

 printf("Plz Enter a Num:- ");
 scanf("%d", &count);

 for(a,b,c;c<=count;i++)
 {
    printf("%d. %d + %d = %d\n",i,a,b,c);

    a=b;
    b=c;
    c+=a;
 }
return 0;
}

