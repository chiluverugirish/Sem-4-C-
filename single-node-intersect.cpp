#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    void add(Node* n) {
        if (head == NULL) {
            head = tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

    void intersect(Node* t1, Node* t2) {
        while (t1 != NULL && t2 != NULL) {
            if (t1 == t2) { // Intersection found
                cout << "Intersection at node with data: " << t1->data << endl;
                return;
            }
            t1 = t1->next;
            t2 = t2->next;
        }
        cout << "No intersection found" << endl;
    }

    void intersectmix(Node* t1, Node* t2) {
        int Lent1 = 0, Lent2 = 0;

        // Calculate length of first list
        Node* temp = t1;
        while (temp != NULL) {
            Lent1++;
            temp = temp->next;
        }

        // Calculate length of second list
        temp = t2;
        while (temp != NULL) {
            Lent2++;
            temp = temp->next;
        }

        cout << "Length of list 1: " << Lent1 << endl;
        cout << "Length of list 2: " << Lent2 << endl;

        // Align both lists at the same starting point
        if (Lent1 > Lent2) {
            int diff = Lent1 - Lent2;
            for (int i = 0; i < diff; i++) {
                t1 = t1->next;
            }
        } else {
            int diff = Lent2 - Lent1;
            for (int i = 0; i < diff; i++) {
                t2 = t2->next;
            }
        }

        // Check for intersection
        intersect(t1, t2);
    }
};

int main() {
    List l1;
    Node* m1 = new Node(101);
    Node* m2 = new Node(102);
    Node* m3 = new Node(103);
    Node* m4 = new Node(104);
    Node* m5 = new Node(105);
    Node* m6 = new Node(106);

    l1.add(m1);
    l1.add(m2);
    l1.add(m3);
    l1.add(m4);
    l1.add(m5);
    l1.add(m6);

    l1.display();

    List l2;
    Node* n1 = new Node(201);
    Node* n2 = new Node(202);

    l2.add(n1);
    l2.add(n2);
    l2.add(m3); // Intersection happens at node m3

    l2.display();

    l1.intersectmix(m1, n1);

    // Free allocated memory
    delete m1;
    delete m2;
    delete m3;
    delete m4;
    delete m5;
    delete m6;
    delete n1;
    delete n2;

    return 0;
}
