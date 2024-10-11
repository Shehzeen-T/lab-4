#include "linked_list.h"
#include "node.h"

#include <iostream>
using namespace std;

linked_list::linked_list()
{
    head = new node();
}

bool linked_list::emptylist()
{
    if (head == NULL) {
        return true; 
    }
    else {
        return false; 
    }
}

void linked_list::insert_begin(int value) {
    node* newNode = new node;
    newNode->data = value;
    newNode->next = head->next;
    head->next = newNode;
}

void linked_list::insert_after(int oldV,int newV){
    node* temp = head->next;  
    while (temp != NULL && temp->data != oldV) {
        temp = temp->next;
    }
    if (temp != NULL) {  
        node* newNode = new node(newV);
        newNode->next = temp->next;
        temp->next = newNode;
    }

}

void linked_list::insert_end(int value) {
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new node(value);
}

void linked_list::delete_Node(int val) {
    node* temp = head;
    if (temp->next != NULL) {
        node* del = temp->next;
        temp->next = temp->next->next;
        free(del);
    }
}

void linked_list::delete_begin() {
        node* temp = head->next;
        head->next = head->next->next;
        free(temp);  
}

void linked_list::delete_end() {
    node* temp = head;
    while (temp->next != NULL && temp->next->next != NULL) {
        temp = temp->next;
    }
    if (temp->next != NULL) {
        delete temp->next;
        temp->next = NULL;
    }
}

void linked_list::traverse() {
    node* temp = head->next;
    if (temp == NULL) {
        cout << "List is empty.\n";
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



