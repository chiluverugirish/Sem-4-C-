#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node *next;
    
    Node(string value) {
        name = value;
        next = nullptr;
    }
    
    ~Node() {
        cout << "Destructor called for " << name << endl;
    }
};

class SingleLinkedList {
public:
    Node *head;

    SingleLinkedList() {
        head = nullptr;
    }

    void add(string name) {
        Node *n = new Node(name);
        if (head == nullptr) {
            head = n;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = n;
    }

    void display() {
        Node *temp = head;
        while (temp != nullptr) {
            cout << temp->name << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~SingleLinkedList() {
        Node *temp = head;
        while (temp != nullptr) {
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
        cout << "SingleLinkedList Destructor called" << endl;
    }
};

int main() {
    SingleLinkedList *lis = new SingleLinkedList(); // Allocate memory
    lis->add("Hi");
    lis->add("neoi");
    lis->add("qe");
    
    lis->display(); // Display the list
    
    delete lis; // Free memory
    return 0;
}
