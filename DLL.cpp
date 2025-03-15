#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        data=d;
        next=nullptr;
        prev=nullptr;
    }
    ~Node(){
        cout<<"destructor ";
    }
};
class DLL{
    public:
    Node* head;
    DLL(){
        head=nullptr;
    }
    ~DLL(){
        cout<<"Destructor";
    }
    void add(Node* a){
        if(head==nullptr){
            head=a;
            return;
        }
        else{
              Node* temp=head;
              while(temp->next!=nullptr){
                temp=temp->next;
              }
              temp->next=a;
              a->prev=temp;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
    }
    void add_after(Node* a,int val){
        Node* temp=head;
        while(temp->next!=nullptr){
            if(temp->data==val){
                a->next=temp->next;
                a->prev=temp;
                temp->next=a;
                (a->next)->prev=a;
                break;
            }
            temp=temp->next;
        }

    }
    void remove(int val){
        Node* temp=head;
        while (temp->next!=nullptr)
        {
            if(temp->data==val){
               (temp->prev)->next=temp->next;
               (temp->next)->prev=temp->prev;
               delete temp;
               break;
            }
            temp=temp->next;
        }
        
    }
    void pop(){
        Node* temp=head;
        Node* temp2;
        while ((temp->next)->next!=nullptr)
        {
            temp=temp->next;
        }
        temp2=temp->next;
        temp->next=nullptr;
        delete temp2;
        
    }
};

int main(){
    DLL l1;
    cout<<"hi\n";
    Node*n1=new Node(10);
    Node* n2=new Node(20);
    Node* n3= new Node(30);
    Node* n4=new Node(100);
    l1.add(n1);
    l1.add(n2);
    l1.add(n3);

    l1.add_after(n4,20);
    l1.display();
    cout<<"\n";

    l1.remove(20);
    l1.display();

    l1.pop();
    l1.display();
    return 0;
}
