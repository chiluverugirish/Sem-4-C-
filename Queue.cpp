#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        data=n;
    }
};
class Queue{
    public:
    Node* first;
    Node* last;
    int size=0;
    Queue(){
        first=nullptr;
        last=nullptr;
    }
    bool isempty(){
        
        return size==0;
    }
    void enqueue(int d){
        Node* n=new Node(d);
        if(first==nullptr){
            first=n;
            last=n;
            size++;
        }
        else{
            last->next=n;
            last=n;
            size++;
        }
    }
    void dequeue(){
        if(first==nullptr){
            cout<<"cannot delete empty";
            return;
        }
        else if(first->next==nullptr){
            delete first;
            return;
        }
        Node* temp=first;
        first=first->next;
        delete temp;
    }
    void display(){
        if(first==nullptr) return;
        Node* temp=first;
        while(temp->next!=nullptr){
            cout<<temp->data<<"\n";
            temp=temp->next;
        }
    }
};
int main(){
    Queue* q=new Queue();
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->display();
    cout<<"deleted first vala\n";
    cout<<"size is :"<<q->size<<endl;
    q->dequeue();
    q->display();
}