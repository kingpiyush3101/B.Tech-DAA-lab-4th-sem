#include<stdio.h> 
#include<conio.h>  
void main ()  
{  
    int a[10];  
    int k, i,loc,n;  
    printf("Enter no.of Elements:");
	scanf("%d",&n);
	printf("Enter Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("Enter element to be searched: ");  
    scanf("%d",&k);  
    for (i = 0; i< n; i++)  
    {  
        if(a[i] == k)   
        {  
            loc = i+1;  
            break;  
        }   
        else   
        loc = 0;  
    }   
    if(loc != 0)  
    {  
        printf("Element found at location %d\n",loc);  
    }  
    else  
    {  
        printf("Element not found\n");   
    } 
	getch(); 
}   
