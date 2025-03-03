#include<iostream>
using namespace std;
int findNumber(int a[], int size,int target){
    int l=0,r=size-1,mid=0;
    
    while(l<=r){
        mid =l+(r-l)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]<target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}
// Function to find the first occurrence of the target
int findFirstOccurrence(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int result = -1; // Initialize result to -1 (target not found)

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index
        if(arr[mid]==target){
            result=mid;
            right=mid-1;
        }
        if(arr[mid]<target){
            left=mid+1;
        }
        if(arr[mid]>target){
            right=mid-1;
        }
       
    }

    return result;
}
int smallest_ele_greater(int a[],int s,int target){
    int l=0;
    int r=s-1;
    int mid=0;
    int result=-1;
    while(l<=r){
        mid =l+(r-l)/2;
        if(a[mid]==target){
            result=mid;
            l=mid-1;
        }
        else if(a[mid]<target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return result-1;
}

int main(){
    int arr[]={1,2,3,4,5,6,6,6,7};
    cout<<"qwerty";
    cout<<"the array: "<<findNumber(arr,9,6);
    //cout<<"the smallest_ele_greater target: "<<smallest_ele_greater(arr,9,6);
    cout<<"findFirstOccurrence: "<<findFirstOccurrence(arr,9,6);
}