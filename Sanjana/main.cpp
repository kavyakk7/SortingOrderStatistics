#include "RandomizedQuickSort.h"
#include "FirstQuickSort.h"
#include <iostream>

using namespace std;

//int partition(int arr[], int low, int high);
//int RandomizedQuickSort::partition_r(int *arr, int low, int high);
// int FirstQuickSort::partition1(int *arr, int low, int high);
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */


void quickSort(int arr[], int low, int high)
{
    if (low < high) {

        /* pi is partitioning index, arr[p] is now
        at right place */
        // int pi = FirstQuickSort::partition1(arr, low, high);
        int pi = RandomizedQuickSort::partition_r(arr, low, high);


        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}