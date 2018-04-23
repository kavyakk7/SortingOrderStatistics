//
// Created by Sanjana on 21-04-2018.
//

#include "RandomizedQuickSort.h"
#include <iostream>
using namespace std;



// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
/* This function takes last element as pivot, places
  the pivot element at its correct position in sorted
  array, and places all smaller (smaller than pivot)
  to left of pivot and all greater elements to right
  of pivot */
//int partition(int arr[], int low, int high)
//{
//    int pivot = arr[high]; // pivot
//    int i = (low - 1); // Index of smaller element
//
//    for (int j = low; j <= high - 1; j++) {
//
//        // If current element is smaller than or
//        // equal to pivot
//        if (arr[j] <= pivot) {
//
//            i++; // increment index of smaller element
//            swap(&arr[i], &arr[j]);
//        }
//    }
//    swap(&arr[i + 1], &arr[high]);
//    return (i + 1);
//}

// Generates Random Pivot, swaps pivot with
// end element and calls the partition function
//int partition_r(int arr[], int low, int high)
//{
//    // Generate a random number in between
//    // low .. high
//    srand(time(NULL));
//    int random = low + rand() % (high - low);
//
//    // Swap A[random] with A[high]
//    swap(&arr[random], &arr[high]);
//
//    return partition(arr, low, high);
//}

//void quickSort(int arr[], int low, int high)
//{
//    if (low < high) {
//
//        /* pi is partitioning index, arr[p] is now
//        at right place */
//        int pi = partition_r(arr, low, high);
//
//        // Separately sort elements before
//        // partition and after partition
//        quickSort(arr, low, pi - 1);
//        quickSort(arr, pi + 1, high);
//    }
//}

/* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

//void RandomizedQuickSort::quickSort(int *arr, int low, int high) {
//    if (low < high) {
//
//        /* pi is partitioning index, arr[p] is now
//        at right place */
//        int pi = partition_r(arr, low, high);
//
//        // Separately sort elements before
//        // partition and after partition
//        quickSort(arr, low, pi - 1);
//        quickSort(arr, pi + 1, high);
//    }
//}

int RandomizedQuickSort::partition_r(int *arr, int low, int high) {
    srand(time(NULL));
    int random = low + rand() % (high - low);

    // Swap A[random] with A[high]
    swap(&arr[random], &arr[high]);

    return RandomizedQuickSort::partition(arr, low, high);

}

int RandomizedQuickSort::partition(int *arr, int low, int high) {
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++) {

        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot) {

            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
