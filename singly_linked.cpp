#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
class LinkedList {
private:
    Node* head;
public:
    // Constructor for list
    LinkedList() {
        head = NULL;
    }
    // Insert a node at the end
    void insert(int x) {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    // Delete a node by value
    void remove(int x) {
        if (head == NULL) {
            cout << "list is empty" << endl;
            return;
        }
        // If the node to delete is the first node
        if (head->data == x) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL && temp->next->data != x) {
            temp = temp->next;
        }
        // Value not found
        if (temp->next == NULL) {
            cout << x <<  "not found" << endl;
            return;
        }
        Node* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
    }
    // Display the list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "-> ";
            temp = temp->next;
        }
       cout << "NULL" << endl;
    }
};
// Main function to test the linked list
int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    list.insert(40);
    list.insert(50);
    list.insert(60);
    list.display();
    list.remove(40);
    list.display();
    list.remove(60);
    list.display();
    list.remove(100);
    list.display();
    return 0;
}

/*

d:\DSA Programming>g++ singly_linked.cpp -o 4output

d:\DSA Programming>.\4output
10-> 20-> 30-> NULL
10-> 20-> 30-> 40-> 50-> 60-> NULL
10-> 20-> 30-> 50-> 60-> NULL
10-> 20-> 30-> 50-> NULL
100not found
10-> 20-> 30-> 50-> NULL
*/