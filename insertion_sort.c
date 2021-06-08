#include<stdio.h>
#include<conio.h>
void main()
{
	int abc[10],i,j,k,n;
	printf("Enter no.of Elements:");
	scanf("%d",&n);
	printf("Enter Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&abc[i]);
	}
	for(i=1;i<n;i++)
	{
		k=abc[i];
		j=i-1;
		while(j>=0&&abc[j]>k)
		{
			abc[j+1]=abc[j];
			j=j-1;
		}
		abc[j+1]=k;
	}
	printf("Sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",abc[i]);
	}
	getch();
}
