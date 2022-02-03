#include<stdio.h>

char strrev(char a[]);

void main()
{
int i=0;
char rev[20]="HYDERABAD INDIA";
strrev(rev);
}

char strrev(char a[])
{
int i=0,j=0;
char tem;
for(i=0;a[i]!='\0';i++);
printf("%d",i);
for(j=0;j<=i/2;j++)
{
	tem=a[j];
	a[j]=a[i-j-1];
	a[i-j-1]=tem;
}
printf("\n%s\n",a);
}
 
