#include<iostream>
using namespace std;
class Stack{
    int* arr;
    int size;
    int top;

    public:
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }
        void push(int val){
            if(top<size){
                arr[++top]=val;
            }
            else{
                cout<<"Out of size";
            }
        }
        bool isEmpty(){
            return top==-1;
        }
        void pop(){
           if(!isEmpty()){
            arr[top--]=0;
           }
        }
        void display(){
           for (size_t i = 0; i < size; i++)
           {
            cout<<arr[i]<<" ";

           }
           cout<<"\n";
           
        }
    

};
int main()
{
    Stack s1(5);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.display();
    
    return 0;
}

