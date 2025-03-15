#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    int** ptr2=&ptr;
    int &b=a;
    b=100;//using references(alias)
    cout<<"b is "<<b<<"\na is "<<a;
    bool k=(a==b); 
    cout<<"\nk is "<<k;
    int arr []={1,2,3,4,5};
    cout<<arr <<endl;
    cout<< *arr+3;
    int k1=10;
    int k2=20;
    int *p1  =  &k1;
    int *p2 = &k2;
    cout<<p1-p2;
    // cout<<**ptr2;
}