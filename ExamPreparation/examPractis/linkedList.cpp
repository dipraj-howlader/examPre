#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    Node* next;
};

Node* createNode(string name) {
    Node* newNode = new Node;
    newNode->name = name;
    newNode->next = nullptr;
    return newNode;
}

Node* insertAtAnyPosition(Node* header, string name, string position) {
    Node* newNode = createNode(name);
    Node* current = header;
    while (current->next != nullptr && current->name != position) {
        current = current->next;
    }
    if(current->name != position){
        cout<<"Invalid position"<<endl;
        return header;
    }
    newNode->next = current->next;
    current->next = newNode;
    return header;
}

Node* deleteNode(Node* header, string name) {
    Node* current = header;
    if(current->name == name){
        return current->next;
    }
    while (current->next != nullptr && current->next->name != name) {
        current = current->next;
    }
    if(current->next == nullptr){
        cout<<"Invalid name"<<endl;
        return header;
    }
    current->next = current->next->next;
    return header;
}

void printList(Node* header) {
    Node* current = header;
    while (current != nullptr) {
        cout << current->name << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    int n;
    cout<<"How many names you want to insert: ";
    cin>>n;
    if(n == 0){
        cout<<"List is empty"<<endl;
        return 0;
    }
    string name;
    cout<<"Enter name: ";
    cin>>name;
    Node* header = createNode(name);
    Node* current = header;
    for(int i = 1; i < n; i++) {
        cout<<"Enter name: ";
        cin>>name;
        current->next = createNode(name);
        current = current->next;
    }
    cout<<"Original list: ";
    printList(header);

    string newName, position;
    cout<<"Enter new name: ";
    cin>>newName;
    cout<<"Enter position after which you want to insert the new name: ";
    cin>>position;
    header = insertAtAnyPosition(header, newName, position);
    cout<<"List after insertion: ";
    printList(header);

    string delName;
    cout<<"Enter name you want to delete: ";
    cin>>delName;
    header = deleteNode(header, delName);
    cout<<"List after deletion: ";
    printList(header);

    return 0;
}
