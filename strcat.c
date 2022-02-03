#include<stdio.h>

char cat(char a[],char b[]);

void main()
{
char a[40]="THUNDERSOFT ";
char b[20]="HYDERABAD INDIA";

cat(a,b);
printf("\n%s",a);
}

char cat(char a[],char b[])
{
int i=0,j=0;
for(i=0;a[i]!='\0';i++);
for(j=0;b[j]!='\0';j++)
	a[i++]=b[j];
}
