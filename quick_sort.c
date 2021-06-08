#include <stdio.h>
#include <conio.h>
void quicksort (int [], int, int);
int main()
{
    int a[10];
    int n, i;
    printf("Enter no. of elements: ");
    scanf("%d", &n); 
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    } 
    quicksort(a, 0, n - 1);
    printf("Sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    getch();
}
void quicksort(int a[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j) 
        {
            while (a[i] <= a[pivot] && i <= high)
            {
                i++;
            }
            while (a[j] > a[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[j];
        a[j] = a[pivot];
        a[pivot] = temp;
        quicksort(a, low, j - 1);
        quicksort(a, j + 1, high);
    }
}
