#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node(int inp , Node* nxt = nullptr){
            val = inp;
            next = nxt;
        }
};

class Stack{
    public:
    int length = 0;
    Node* top = nullptr;
    Node* prev = nullptr;
    Node* head = nullptr;

    void push(int value){
        Node temp(value);
        if (length==0){
            top = &temp;
            head = &temp;
        }
        else{
            top->next = &temp;
            prev = top;
        }
        top = top->next;
        length+=1;
    }
    
    void pop(){
        top = prev;
        length-=1;
    }

    void peek(){
        cout<<"in Peek"<<endl;
        Node* curr = head; 
        while (curr->next!=nullptr){
            curr = curr->next;
        }
        cout<<curr->val<<endl;
    }

    void display(){
        Node* curr = head; 
        while (curr!=nullptr){
            cout<<curr->val<<" ";
            curr = curr->next;
        }
    }
};

int main(){
    Stack s;
    s.push(10);
    s.display();
    return 0;
}
