#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node *head;
    Node *tail;
    public:
    List(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        // Node newNode (val);//this is static one which deletes after the completion of funcn
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
    void pop_back(){
        if(head==NULL){
            return;
        }
        else if (head==tail)
        {
            delete head;
            head=tail=NULL;
            return;
        }
        
        else{
            Node* temp=head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            delete temp->next;
            tail=temp;
            temp->next=NULL;
        }
    }
    void pop_front(){
        if(head==NULL){
            return;
        }
        else if (head==tail)
        {
            delete head;
            head=tail=NULL;
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        
    }
    void len(){
        Node *temp=head;
        int c;
        while(temp!=NULL){
            c++;
        }
        cout<<c;
    }
    void reverse(){
        Node*curr=head;
        Node* temp=head->next;//temp means next ptr
        Node* prev=NULL;
        while(curr->next!=NULL){
            //flip
            curr->next=prev;
            //adjustn nodes
            prev=curr;
            curr=temp;
            temp=curr->next;
        }
        //for last node
        curr->next=prev;

        this->head=curr;
    }
    
};
int main(){
    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_back(40);
    ll.push_back(50);
    ll.display();
    // ll.pop_back();
    // ll.pop_back();
    // cout<<"\n";
    // ll.display();
    // ll.pop_front();
    // cout<<"\n";
    // ll.display();
    ll.reverse();
    ll.display();

}