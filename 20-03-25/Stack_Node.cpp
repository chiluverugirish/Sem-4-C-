#include <iostream>
using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) : data(val), next(nullptr) {}  // Proper initialization
//     ~Node() {
//         cout << "Node with data " << data << " destroyed\n";
//     }
// };

// class Stack {
// public:
//     Node* top;
//     Node* head;

//     Stack() : top(nullptr), head(nullptr) {}

//     void push(int val) {
//         Node* newNode = new Node(val);
//         if (head == nullptr) {
//             head = top = newNode;
//         } else {
//             newNode->next = head; // Insert at head
//             head = newNode;
//         }
//     }

//     void pop() {
//         if (head == nullptr) {
//             cout << "Stack is empty\n";
//             return;
//         }
//         if (head == top) { // Only one element
//             delete top;
//             head = top = nullptr;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next != top) {
//             temp = temp->next;
//         }
//         delete top;
//         top = temp;
//         top->next = nullptr;
//     }

//     void display() {
//         if (head == nullptr) {
//             cout << "Stack is empty\n";
//             return;
//         }
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Stack s1;
//     s1.push(10);
//     s1.push(20);
//     s1.push(30);
//     s1.pop();
//     s1.display();
//     return 0;
// }
class Node{
    
    public:
    Node* next;
    int data;
    int size;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
class Stack{
    Node* top;
    public:
    Stack(){
        top=nullptr;
    }
    void push(int val){
        Node* newNode= new Node(val);
        if(top==nullptr){
            top=newNode;
        }
        else{
            newNode->next=top;
            top=newNode;
        }
    }
    void pop(){
        if(top==nullptr){
            cout<<"ntg to remove";
        }
        else{
            Node* temp=top;
            if(temp->next->next!=nullptr){
                top=top->next;
                delete temp;
            }
            else{
                delete top;
            }
        }
    }
    void display(){
        Node* temp=top;
        while (temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        
    }
};
int main(int argc, char const *argv[])
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.display();
    return 0;
}
