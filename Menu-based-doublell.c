/*Write a program to create a double linked list and perform the following menu based operations on it:
i. insert an element at specific position 
ii. delete an element from specific position
iii. Traverse the list
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev, *next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    void insertAtPosition(int data, int pos) {
        Node* newNode = new Node(data);
        if (pos == 1) {
            newNode->next = head;
            if (head) head->prev = newNode;
            head = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp; i++) temp = temp->next;
        if (!temp) return;
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next) temp->next->prev = newNode;
        temp->next = newNode;
    }

    void deleteFromPosition(int pos) {
        if (!head) return;
        Node* temp = head;
        if (pos == 1) {
            head = head->next;
            if (head) head->prev = nullptr;
            delete temp;
            return;
        }
        for (int i = 1; i < pos && temp; i++) temp = temp->next;
        if (!temp) return;
        if (temp->next) temp->next->prev = temp->prev;
        if (temp->prev) temp->prev->next = temp->next;
        delete temp;
    }

    void traverse() {
        for (Node* temp = head; temp; temp = temp->next) cout << temp->data << " ";
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    int choice, data, pos;

    do {
        cout << "\n1. Insert\n2. Delete\n3. Traverse\n4. Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Data: "; cin >> data;
            cout << "Position: "; cin >> pos;
            dll.insertAtPosition(data, pos);
            break;
        case 2:
            cout << "Position: "; cin >> pos;
            dll.deleteFromPosition(pos);
            break;
        case 3:
            dll.traverse();
            break;
        }
    } while (choice != 4);

    return 0;
}
