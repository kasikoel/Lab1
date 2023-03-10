 /*-- ListLinked.cpp------------------------------------------------------------
   This file implements the ListLinked member functions.
-------------------------------------------------------------------------*/
#include "ListLinked.h"
#include <cstddef>
#include <iostream>
using namespace std;

/* Constructor  */
ListLinked::ListLinked()
{
		first = NULL;
}

/* destructor - clean up memory for remaining nodes in list */
ListLinked::~ListLinked()
{
	Node* temp;
	temp = first;
	while (temp != NULL)
	{
		Node* save = temp;
		temp = temp->next;
		delete save;
	}
}


/* empty */
bool ListLinked::empty()
{
	if (first == NULL)
		return true;
	else
		return false;
}

/* display */
void ListLinked::display()
{
	Node* temp;
	temp = first;
	while (temp != NULL)
	{
		cout << temp->data << ",";
		temp = temp->next;
	}
	cout << endl;
}

/* insert element in position */
void ListLinked::insert(ElementType e, int position = 0)
{
	Node* newptr = new Node(e);
	if (empty()) //insert the very first element
	{
		if (position == 0)  // must specify position 0 for empty list
		{
			newptr->next = NULL;
			first = newptr;
		}
		else
		{
			cout << "Location Error!" << endl;
		}
	}
	else
	{
		if (position == 0) //insert on the first position when some elements existed
		{
			newptr->next = first;
			first = newptr;
		}
		else //most cases belongs to this situation (as showed in the class slide)
		{
			// Add your comment here
			Node* preptr;
			// Add your comment here
			preptr = first;
			// add your comment here
			for (int i = 0; i < position - 1; i++)
			    // add your comment here
				preptr = preptr->next;
			// add your comment here
			newptr->next = preptr->next;
			// add your comment here
			preptr->next = newptr;
		}
	}
}

/* Remove specified element from the list at a specific position */
void ListLinked::erase(int position)
{
	if (position == 0) //delete the first element
	{
		Node* ptr = first;
		first = ptr->next;
		delete(ptr);
	}
	else
	{
		Node* preptr;
		// add your comment here
		preptr = first;
		// add your comment here
		for (int i = 0; i < position - 1; i++)
		    // add your comment here
			preptr = preptr->next;
		// add your comment here
		Node* ptr = preptr->next;
		// add your comment here
		preptr->next = ptr->next;
		// add your comment here
		delete(ptr);
	}
}

