#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter number of walls	:");
	scanf("%d",&n);
	int arr[n];
	printf("Now enter heights of walls in blocks	:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int i,j,k;
	int arr1[n],arr2[n];
	arr1[0]=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>=arr1[i-1])
			arr1[i]=arr[i];
		else
			arr1[i]=arr1[i-1];
	}
	arr2[n-1]=arr[n-1];
	for(i=n-2;i>=0;i--)
	{
		if(arr[i]>=arr2[i+1])
			arr2[i]=arr[i];
		else
			arr2[i]=arr2[i+1];
	}
	int space=0;
	for(i=0;i<n;i++)
	{
		if(arr1[i]>=arr2[i])
		{
			k=arr[i]-arr2[i];
			space+=abs(k);
		}
		else
		{
			k=arr[i]-arr1[i];
			space+=abs(k);
		}
	}
	printf("The number of blocks filled by rain	:%d\n",space);
	return 0;
}
