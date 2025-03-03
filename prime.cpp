#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //1,2,3,5
    int n;
    cin>>n;
    bool p=0;
    for (int i = 2; i < n; i++)
    {
       if(n%i==0) p=1;
       
    }
    if(n==2){
        cout<<"prime";
    }
    else if(p){
        cout<<"not a prime";
    }
    else{
        cout<<"prime";
    }
    
    // return 0;
}
