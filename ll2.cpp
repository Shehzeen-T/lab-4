#include "ll2.h"
#include <iostream>
using namespace std;

ll2::ll2()
{
	head = new node();
	bool emptylist();
}

bool ll2::emptylist()
{
    if (head == NULL) {
        return true;
    }
    else {
        return false;
    }
}

void ll2::insert_at(int pos, int value) {
     
        if (pos <= 1) {
            cout << "Invalid position. Position 1 is restricted." << endl;
            return;
        }

        node* newNode = new node(value);
        node* temp = head;
        int n = 1;

        while (temp != NULL && n < pos - 1) {
            temp = temp->next;
            n++;
        }
        // Insert the new node at the position
        newNode->next = temp->next;
        temp->next = newNode;
}

void ll2::insert_begin(int value) {
    node* newNode = new node;
    newNode->data = value;
    newNode->next = head->next;
    head->next = newNode;
}

void ll2::insert_end(int value) {
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new node(value);
}

void ll2::delete_Node(int pos) {
  

}

void ll2::delete_begin() {
    node* temp = head->next;
    head->next = head->next->next;
    free(temp);
}

void ll2::delete_end() {
    node* temp = head;
    while (temp->next != NULL && temp->next->next != NULL) {
        temp = temp->next;
    }
    if (temp->next != NULL) {
        delete temp->next;
        temp->next = NULL;
    }
}

void ll2::traverse() {
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