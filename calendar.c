#include<stdio.h>
#include<stdlib.h>
#define RED "\x1B[35m"
#define GRE "\x1B[32m"
#define RESET "\x1B[0m"
int isLeap(int year)
{
	if(year%100==0){
		if(year%400==0)
			return 1;
		else
			return 0;
	}
	else{
		if(year%4==0)
			return 1;
		else
			return 0;}
}
int matrix(int m, int b, int n)
{
	int i=1,d=1;
	char months[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	printf( RED "\n\n\n			%s\n\n",months[m-1]);
	char bars[7][3]={"Mo\t","Tu\t","We\t","Th\t","Fr\t","Sa\t","Su\t"};
	printf( GRE "%s\n",bars[0]);
	printf("\n");
	while(i<b)
	{
		printf("  \t");
		i++;
	}
	while(d<=n)
	{
		printf( RESET "%2d\t",d);
		d++;
		if(b>=7)
		{
			b=1;
			printf("\n");
		}
		else
			b++;
	}
	return b;
}
int main()
{
	int i=1900,bar=1,d=1,m=1,yr;
	printf("Enter year	:");
	scanf("%d",&yr);
	for(i;i<yr;i++)
	{
		if(isLeap(i))
		{
			bar+=2;
		}
		else
		{
			bar++;
		}
		if(bar>7)
			bar=bar%7;
	}
	for(m=1;m<13;m++)
	{
		if(m==2)
		{
			if(isLeap(i))
			{
				bar=matrix(m,bar,29);
				continue;
			}
			else
			{
				bar=matrix(m,bar,28);
				continue;
			}
		}
		if((m==4)||(m==6)||(m==9)||(m==11))
		{
			bar=matrix(m,bar,30);
			continue;
		}
		else
		{
			bar=matrix(m,bar,31);
			continue;
		}
	}
	printf("\n");
	return 0;
}
