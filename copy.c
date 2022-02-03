#include<stdio.h>
void swap(char a[],char b[]);
void main()
{
int i=0;
char arr[20]="HYDERABAD INDIA";
char brr[20];
swap(arr,brr);
printf("DATA IN FIRST ARRAY\n");
printf("%s",arr);
printf("\nDATA IN SECOND ARRAY\n");
printf("\n%s",brr);

}

void swap(char a[],char b[])
{
int i=0;
for(i=0;a[i]!='\0';i++)
{
	b[i]=a[i];
}
}
