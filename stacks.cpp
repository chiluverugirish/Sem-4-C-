#include<iostream>
#include<vector>
#include<list>
using namespace std;
// class Stack{
//     vector <int> v;
//     public:
//     void push(int val){
//         v.push_back(val);
//     }
//     void pop(){
//         v.pop_back();
//     }
//     int top(){
//         return v.back();
//     }
//     bool isEmpty(){
//         return v.empty();
//     }

// };
class Stack{
    list <int> v;
    public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    bool isEmpty(){
        return v.empty();
    }

};

int main()
{
    Stack s1;
    cout<<s1.isEmpty()<<"\n";
    s1.push(10);
    s1.push(20);
    s1.push(30);

    while(!s1.isEmpty()){
        cout<<s1.top()<<"   ";
        s1.pop();
    }
    
    return 0;
}
