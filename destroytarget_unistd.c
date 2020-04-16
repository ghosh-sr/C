#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#define GAP 25 
void print_spaces(int);
main()
{
	int n=GAP,i,o,ml;
	char m[20],s[20],t[20];
	strcpy(m,"B===>");
	ml=strlen(m);
	strcpy(t,"TARGET");
	for(o=0;o<GAP;o++)
	{
		system("clear");
		print_spaces(10);
		for(i=0;i<o*ml;i++)
			printf(" ");
		printf("%s",m);
		for(i=(n-1)*ml-1;i>=0;i--)
			printf(" ");
		printf("%s\n",t);
		usleep(155100);
		n--;
	}
	system("clear");
	print_spaces(10);
	for(i=0;i<GAP*ml;i++)
		printf(" ");
	printf("DESTROYED\n");
}
void print_spaces(int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("\n");
}

