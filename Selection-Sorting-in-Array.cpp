#include <iostream>

using namespace std;

// Print Array
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
// Selection Sorting Array
void selectionSort(int arr[], int n){ //In selection sorting first of all we find the smallest number
    for(int i=0; i<n-1; i++){         //compare it with First Index and then swap it if first index element is bigger
        int smallest = i;             //same as in each iteration we first find smallest number and then swap it with the value of i
    for(int j=i+1; j<n; j++){         // For Decreasing Order just Chanege: if(arr[j] > arr[smallest])
        if(arr[j]<arr[smallest]){
            smallest = j;
        }
    } swap(arr[i],arr[smallest]);
    }
}
int main()
{
     // Selection Sort
    int arr[] = {4,1,5,2,3};
    int n = 5;

    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}
