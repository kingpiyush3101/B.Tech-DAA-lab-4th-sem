#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],n,i,k,lower,upper, mid;
  printf("Enter number of elements:");
  scanf("%d", &n);
  printf("Enter Elements:");
  for(i=0;i<n;i++)
  {
	scanf("%d",&a[i]);
  }
  printf("Enter element to be searched: ");  
  scanf("%d",&k);
  lower = 0;
  upper = n - 1;
  mid = (lower+upper)/2;
  while (lower <= 0) 
  {
    if (a[mid] < k)
      lower = mid + 1;
    else if (a[mid] == k) 
	{
      printf("%d found at location %d.\n",k, mid+1);
      break;
    }
    else
	{
	  upper = mid - 1;
      mid = (lower + upper)/2;
	}
  }
  if (lower > upper)
    printf("%d not found.\n", k);
  getch();
}
