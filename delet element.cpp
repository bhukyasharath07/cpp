#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertEnd(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}
void display(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
Node* deleteBeginning(Node* head) {
    if (head == NULL) {
        cout << "List is already empty" << endl;
        return NULL;
    }

    Node* temp = head;
    cout << "Deleted element: " << head->data << endl;
    head = head->next;
    delete temp;

    return head;
}

int main() {
    Node* head = NULL;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        head = insertEnd(head, value);
    }

    cout << "\nInitial List:" << endl;
    display(head);
    while (head != NULL) {
        head = deleteBeginning(head);
        cout << "List after deletion:" << endl;
        display(head);
        cout << endl;
    }

    return 0;
}
