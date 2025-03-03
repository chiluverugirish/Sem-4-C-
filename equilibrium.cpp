/*
Write a C++ Program for Finding Equilibrium index in an array.

Given a 0-indexed integer array nums, find the leftmost equilibrium Index.

Hint:
An equilibrium Index is an index at which sum of elements on its left is equal to the sum of element on its right.
That is, nums[0] + nums[1] + ... + nums[equilibriumIndex-1] == nums[equilibriumIndex+1] + nums[equilibriumIndex+2] + ... + nums[nums.length-1]. 
If equilibriumIndex == 0, the left side sum is considered to be 0. Similarly, if equilibriumIndex == nums.length - 1, 
the right side sum is considered to be 0.

Return the leftmost equilibrium Index that satisfies the condition, or -1 if there is no such index.

Example 1:
Input: nums = [2,3,-1,8,4]
Output: 3
Explanation: The sum of the numbers before index 3 is: 2 + 3 + -1 = 4
The sum of the numbers after index 3 is: 4 = 4

Example 2:
Input: nums = [1,-1,4]
Output: 2
Explanation: The sum of the numbers before index 2 is: 1 + -1 = 0
The sum of the numbers after index 2 is: 0


Sample Input:
Enter the number of elements in the array: 3                                    
Enter 3 elements: 1                                                             
-1                                                                              
4              
Sample Output:
The leftmost equilibrium index is: 2   
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter "<< n<<" elements: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ts=0;
    for(int i=0;i<n;i++){
        ts+=arr[i];
    }
    int ls=0;
    int rs=0;
    int id=-1;
    for(int i=1;i<n;i++){
       ls=ls+arr[i-1];
       rs=ts-ls-arr[i];
      // cout<<ls<<" "<<rs<<"\n";
       if(ls==rs){
           id=i;
       }
    }
    cout<<"The leftmost equilibrium index is: "<<id;
}