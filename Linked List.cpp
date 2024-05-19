#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

void addNode(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void printlist(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
}

int main() {
    Node* head = NULL;
    addNode(head, 30);
    addNode(head, 14);
    addNode(head, 10);
    addNode(head, 9);
    
    printlist (head);
    return 0;
}

