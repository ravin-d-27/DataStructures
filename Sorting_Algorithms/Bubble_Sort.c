#include <stdio.h>

void bubble_sort(int arr[], int n);

int main()
{
    int n = 5;
    int arr[] = {5,3,7,6,9};

    bubble_sort(arr, n);

    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i<(n-1); i++)
    {
        for (int j = 0; j<(n-i-1); j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return;
}