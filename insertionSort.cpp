/*
Write a C++ program for implementation of Insertion Sort

*/

#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}
/* Function to sort array using insertion sort */
void insertionSort(int arr[], int n)
{
    
    int temp,j;
  for(int i=1;i<n;i++){
      j=i-1;
      while(arr[j]>arr[j+1] && j>=0){
          temp=arr[j+1];
          arr[j+1]=arr[j];
          arr[j]=temp;
          j=j-1;
      }
      
  }
//   printArray(arr,n);
}

/* A utility function to print array of size n */


// Driver method
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}