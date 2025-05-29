#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node *head;

    DoublyLinkedList() {
        head = nullptr;
    }

    void insertAtHead(int x) {
        Node* newNode = new Node(x);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool find(int x) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == x) {
                cout << "Found" << endl;
                return true;
            }
            temp = temp->next;
        }
        cout << "Not Found" << endl;
        return false;
    }

    void deletion(int x) {
        Node* temp = head;

        while (temp != nullptr) {
            if (temp->data == x) {
                if (temp == head) {
                    head = temp->next;
                    if (head != nullptr) {
                        head->prev = nullptr;
                    }
                } else {
                    if (temp->prev != nullptr) {
                        temp->prev->next = temp->next;
                    }
                    if (temp->next != nullptr) {
                        temp->next->prev = temp->prev;
                    }
                }
                delete temp;
                cout << "Deleted Node " << x << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Node " << x << " not found for deletion." << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertAtHead(10);
    dll.insertAtHead(20);
    dll.insertAtHead(30);
    dll.insertAtHead(40);
    dll.insertAtHead(50);

    cout << "Initial list: ";
    dll.print();

    dll.find(190);

    dll.deletion(50);
    cout << "List after deletion: ";
    dll.print();

    return 0;
}
