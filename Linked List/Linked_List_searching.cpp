#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool search(node* head, int k) {
    node* temp = head;
    while (temp != NULL) {
        if (temp->data == k) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main() {
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 4);

    int key ;
    cout << "Enter a value which you want to find : ";
    cin >> key;
    if (search(head, key)) {
        cout << key << " is found in the list." << endl;
    } else {
        cout << key << " is not found in the list." << endl;
    }

    return 0;
}
