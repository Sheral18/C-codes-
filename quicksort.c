#include <stdio.h>  
  
int partition (int arr[], int start, int end)  
{  
    int pivot = arr[end];   
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
             // increment index of smaller element  
            int t = arr[++i];  
            arr[i] = arr[j];  
            arr[j] = t;  
        }  
    }  
    int t = arr[i+1];  
    arr[i+1] = arr[end];  
    arr[end] = t;  
    return (i + 1);  
}  
  

void quick(int arr[], int start, int end)  
{  
    if (start < end)  
    {  
        int p = partition(arr, start, end); 
        quick(arr, start, p - 1);  
        quick(arr, p + 1, end);  
    }  
}  
  

int main()  
{  
    int arr[] = { 74, 19, 39, 24, 49, 27 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
    printf("Array elements before sorting are - ");  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", arr[i]);  
    quick(arr, 0, n - 1);  
    printf("\nArray elements after sorting are - ");    

 
    for (i = 0; i < n; i++)  
        printf("%d ", arr[i]);  
      
    return 0;  
}  