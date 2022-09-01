#include <stdio.h>

void insertion_sort(int arr[], int n);

int main()
{
    int n = 5;
    int arr[] = {5,3,7,6,9};

   insertion_sort(arr, n);

    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void insertion_sort(int arr[], int n)
{
    
    int i;
    int j;
    int temp;

    for (i=0; i<n; i++)
    {
        temp = arr[i];
        j = i-1;

        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }

    return;
}