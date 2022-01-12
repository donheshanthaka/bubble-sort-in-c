#include <stdio.h>
#include <stdlib.h>



// Bubble sort algorithm
void bubbleSort(int arr[], int sizeOfArray)
{
   int i, j;
   for (i = 0; i < sizeOfArray-1; i++){

       int flag = 0; // the flag variable helps to identify if the loop is running on already sorted list and if no swap has occurred it will help to break the loop saving execution time
       for (j = 0; j < sizeOfArray-i-1; j++)
           if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag++;
           }
           if(flag == 0) break;
   }
}

// Function prints the elements of the array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {456, 45, 64, 4, 11, 6776, -5};
    int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
    printf("\nUnsorted array: ");
    printArray(arr, sizeOfArray);
    bubbleSort(arr, sizeOfArray);
    printf("Sorted array: ");
    printArray(arr, sizeOfArray);
    return 0;
}
