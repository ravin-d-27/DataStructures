#include <stdio.h>

void selection_sort(int arr[], int n);

int main()
{
    int n = 5;
    int arr[] = {5,3,7,6,9};

   selection_sort(arr, n);

    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i<n; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    return;
}