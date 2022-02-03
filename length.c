#include<stdio.h>

int length(char a[]);
void main()
{
int i=0,j=0;
char arr[]="HYDERABAD INDIA";
//for(i=0;arr[i]!='\0';i++);
j=length(arr);
printf("\n%d\n",j);
}

int length(char a[])
{
int i=0,j=0;
for(i=0;a[i]!='\0';i++);
for(j=0;j<i;j++)

printf("%c",a[j]);


return i;
}
