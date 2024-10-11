#include<iostream>
#include"linked_list.h"
#include"ll2.h"

using namespace std;

int main()
{
	linked_list Hlist;

	cout << "CIRCULAR LINKED LIST 1:- \n\n";

	cout << "1.Adding two elements to a circular linked list:\n\n";

	Hlist.insert_begin(5);
	Hlist.insert_end(17);
	Hlist.traverse();

	cout << endl;

	cout << "2. Inserting after specific value:\n\n";
	Hlist.insert_after(17, 25);
	Hlist.traverse(); 

	cout << endl;

	cout << "3. Deleting number specific node:\n\n";
	Hlist.delete_Node(25);
	Hlist.traverse();

	cout << endl;

	cout << "4. Deleting node at beginning:\n\n";
	Hlist.delete_begin();
	Hlist.traverse();

	cout << endl;

	cout << "5. Deleting node at end:\n\n";
	Hlist.delete_end();
	Hlist.traverse();

	ll2 Clist;

	cout << "CIRCULAR LINKED LIST 2:- \n\n";

	Clist.insert_begin(6);
	Clist.insert_end(18);
	Clist.insert_end(30);
	Clist.traverse();

	cout << endl;

	Clist.insert_at(1, 25);
	Clist.traverse();

	cout << endl;

	Clist.delete_Node(30);
	Clist.traverse();

	cout << endl;

	cout << "4. Deleting node at beginning:\n\n";
	Clist.delete_begin();
	Clist.traverse();

	cout << endl;

	cout << "5. Deleting node at end:\n\n";
	Clist.delete_end();
	Clist.traverse();

	return 0;

}