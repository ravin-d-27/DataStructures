#include <stdio.h>

int partition(int arr[], int low, int high);
void quick_sort(int arr[], int low, int high);

int main()
{
    int n = 5;
    int arr[] = {5,3,7,6,9};

    quick_sort(arr, 0, n-1);

    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

int partition(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];

    while (i<j)
    {
        while (pivot>=arr[i])
        {
            i++;
        }

        while (pivot<=arr[j])
        {
            j--;
        }

        if (i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp; 

    return j;
}

void quick_sort(int arr[], int low, int high)
{

    if (low<high)
    {
        int pivot = partition(arr, low, high);
        quick_sort(arr, low, pivot-1);
        quick_sort(arr, pivot+1, high);
    }
}

