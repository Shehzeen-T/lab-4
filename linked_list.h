#include<iostream>
using namespace std;

class linked_list
{
private:
	struct node {
		int data;
		node* next;

		node(int value = 0, node* nextptr = NULL) {
			data = value;
			next = nextptr;
		}
	};

	node* head;  

 public:

	 linked_list();
	 bool emptylist();
	 void insert_after(int, int);
	 void insert_begin(int);
	 void insert_end(int );
	 void delete_Node(int);
	 void delete_begin();
	 void delete_end();
	 void traverse();

};



