/*
Write a C++ program using a class to check whether an array is valid mountain array or not 
hint:An array is considered a mountain array if:
It has at least 3 elements.
There exists an index i such that:
arr[0] < arr[1] < ... < arr[i] (strictly increasing sequence)
arr[i] > arr[i+1] > ... > arr[n-1] (strictly decreasing sequence)
The peak element must not be the first or last element.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool up=0;
    bool down;
    for(int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i]<arr[i+1]){
            up=1;
        }
        else{
            up=0;
        }
        if(up==0){
            if(arr[i-1]>arr[i]>arr[i+1]){
                down=1;
            }
            else{
                down=0;
            }
        }
        
    }
    if(up==0&&down==1){
        cout<<"mountain array!";
    }
}