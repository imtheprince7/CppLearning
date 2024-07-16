#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(){  }
        Node(int data){
            this->data = data;
            this->next = nullptr;
            };
};

class LinkedList{
    private:
        Node *head;
    public:
        LinkedList(){ head = nullptr; }
    Node* getNode(int);
    void insertAtBegin(int new_data);
    void insertAtMiddle(int new_data, int position);
    void insertAtEnd(int data);

    void deleteAtBegin();
    void deleteAtMiddle();
    void deleteAtEnd();

    void printLinkedListElement();
    bool searchElement(int search_element);

};

Node* LinkedList :: getNode(int value){
    Node * new_node = new Node();
    new_node->data = value;
    new_node->next = nullptr;
    // cout<<"Adrress of Created new_node:     "<<new_node<<endl;
    // cout<<"Value of Created new_node:     "<<(&new_node)<<endl;
    return new_node;
} 
void LinkedList :: insertAtBegin(int data){
    // Node *new_node = new Node(data);
    Node *new_node = getNode(data); 
    new_node->next = head;
    head = new_node;
} 

    
 void LinkedList :: insertAtMiddle(int data, int position){
    int index = 1;
    // Node *new_node = new Node(new_data);
      Node *new_node = getNode(data);

    if(head == NULL)
        insertAtBegin(data);
    else{
        if(position<1)
            cout<<"Position is invalid"<<endl;
        else{
            Node *temp = head;
            while(index < position - 1 && temp->next != NULL){
                index++;
                temp = temp->next;
            } 
            if (index < position - 1) {
                // Position is greater than the length of the list
                cout << "Position is out of range" << endl;
            } else {
                new_node->next = temp->next;
                temp->next = new_node;
        }
      }
    }    
 }

 
 void LinkedList :: insertAtEnd(int data){
    if(head == NULL)
        insertAtBegin(data);
    else{
        // Node *new_node = new Node(data);

        Node *new_node = getNode(data);
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
 }

void LinkedList :: printLinkedListElement(){
    Node *temp = head;
    if(head == nullptr)
        cout<<"LinkedList is Empty"<<endl;
    while(temp !=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
bool LinkedList::searchElement(int search_element) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == search_element) {
            return true;
        }
        current = current->next;
    }
    return false;
}

int main(){
     LinkedList ll;
    ll.insertAtBegin(40);
    ll.insertAtBegin(30);
    ll.insertAtBegin(20);
    ll.insertAtBegin(10);
    ll.printLinkedListElement();
    
    // cout<<endl;
    // ll.insertAtMiddle(45,5);
    // ll.printLinkedListElement();

    cout<<endl;
    ll.insertAtEnd(50);
    ll.insertAtEnd(60);
    ll.insertAtEnd(70);
    ll.printLinkedListElement();
    
    // cout<<endl;
    // ll.insertAtMiddle(65,8);
    // ll.printLinkedListElement();

    // Search for an element
    // int element = 30;
    // if (ll.searchElement(element)) {
    //     cout << "\nElement " << element << " found in the linked list." << endl;
    // } else {
    //     cout << "\nElement " << element << " not found in the linked list." << endl;
    // }

   
    return 0;
}