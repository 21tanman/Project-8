#include <iostream>
#include <cstring>
using namespace std;

#include "proj8.h"

List3::List3()
	{
		head = NULL;
		length = 0;
	}

List3::~List3()
	{
		delete head;
	}

bool List3::IsEmpty()const
	{
		if (length==0)
			return true;
		else 
			return false;
	}

int List3::GetLength() const
	{
		return length;
	}


node* List3::ptrTo(int pos)
	{
		node* cur = new node;
		cur = head;
		for (int i = 0; i < pos; i++) //cur points to the node in pos.
			{
				cur = cur-> next;
			}
		return cur;
	}
			
void List3::Print() 
	{
		node* cur = new node;
		cur = head;
		cur->item = 7;
		int counter = 0;
		while(counter < length)
			{	cout << counter << ": ";
				cout << cur->item <<endl;
				cur = cur->next;
				counter++;
			}
	}		


void List3::PutItem (int pos, itemType item)
	{
		int pos1 = pos;
		int pos0 = pos-1;
		if(pos1 > length|| pos1 < 0)
			{
				cout << "position not valid" << endl;
				return;
			}
		node* prevNode = new node;
		prevNode = ptrTo(pos0);
 		node* cur = new node;
		cur-> item = item;
		cur-> next = head;
		if (pos == 0 && length == 0)
			{
				head = cur;
				cur-> next =nullptr;
				length++; 
				return;
			}
		cur-> next = prevNode-> next;
		prevNode->next = cur;
		length++;
		return;
	}


itemType List3::GetItem(int pos)
	{
		if (pos > length || pos < 0)
			{
				cout << "Invalid position" << endl;
				return '\0';
			}
		itemType value;
		node* cur = new node;
		cur = ptrTo(pos);
		return cur-> item;
	}


void List3:: DeleteItem(int pos)
	{
		node* cur = new node;
		node* prev = new node;
		prev = ptrTo(pos-1);
		cur = ptrTo(pos);
		prev->next = cur->next;
		delete cur;
		length--;
		return;
	}
		
				
		

