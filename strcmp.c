#include<stdio.h>

void cmp(char a[],char b[]);
void main()
{
char a1[10]="HYDERABAD";
char b1[10]="HYDEEABAD";
cmp(a1,b1);
}

void cmp(char a[],char b[])
{
int i=0,j=0,k=0,l=0;
for(i=0;a[i]!='\0';i++);
for(j=0;b[j]!='\0';j++);

	if(i==j)
	{
		for(i=0;i<=j;i++)
		{
			if(a[i]==b[i])
				k++;
			else
				l++;
		}
	}
	else
	printf("String is not equal\n");
		
if(l>0)
	printf("String is not equal\n");
	
}

