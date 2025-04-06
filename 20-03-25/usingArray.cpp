#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Stack{
    public:
    vector<int> arr;
    int top = -1;
    Stack(){
        
    }

    void push(int value){
        cout<<"in push"<<endl;
        arr.push_back(value);
        top +=1;
    }

    void pop(){
        cout<<"in pop"<<endl;
        arr.pop_back();
        top-=1;
    }

    void isEmpty(){
        if (top == -1){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }

    void peek(){
        if (top!=-1){
            cout<<"PEEK:\n"<<arr[top]<<endl;
        }
        else{
            cout<<"Nothing to look at. Move ahead..";
        }
    }

    void displayStack(){
        for (int val: arr){
            cout<<val<<" ";
        }
        cout<<"\n";
    }

};

int main(){
    Stack s;
    s.push(13);
    s.push(23);
    s.push(33);
    s.displayStack();
    s.peek();
    s.pop();
    s.pop();
    s.isEmpty();
    s.displayStack();
    s.pop();
    s.isEmpty();
    return 0;
}