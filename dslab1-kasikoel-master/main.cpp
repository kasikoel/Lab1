/*-- main.cpp------------------------------------------------------------
   This file is the driver for testing ListLinked
-------------------------------------------------------------------------*/
#include "ListLinked.h"
#include <iostream>
using namespace std;

/* main is the entrypoint into every C++ program */
int main() 
{
 

    /*
    // Example of creating nodes for a linked list
    Node* n1 = new Node(5);
    Node* n2 = new Node(15);
    Node* n3 = new Node(25);
    Node* n4 = new Node(55);

    Node* list = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    // Print elements in a linked list
    Node* temp;
    temp = list;
    while (temp != NULL)
    {
        cout << temp->data << ",";
        temp = temp->next;
    }
    cout << endl;

    delete n1;
    delete n2;
    delete n3;
    delete n4;
    */
    
	ListLinked* ll = new ListLinked();
	ll->insert(10, 0);
	ll->insert(20, 1);
	ll->insert(30, 2);
	ll->insert(40, 3);
	ll->display();
	ll->insert(50, 0);
	ll->insert(60, 3);
	ll->insert(70, 5);
	ll->display();
	ll->erase(2);
	ll->display();
	ll->erase(1);
	ll->display();
	ll->erase(3);
	ll->display();
    ll->insert(20, 2);
    ll->insert(70, 5);
    ll->insert(100, 0);
    ll->insert(10, 5);
    ll->insert(110, 6);
    ll->display();
    ll->erase(3);
    ll->display();
    ll->erase(5);
    ll->display();
    ll->erase(4);
    ll->display();
    ll->erase(2);
    ll->display();
    ll->erase(1);
    ll->display();

	
	delete ll;

	//cin.get();
     
	return 0;

}
