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
		cur-> next = head;
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
			{	
				cout << cur->item <<endl;
				cur = cur->next;
				counter++;
			}
		
	}

			
		


//work in progress

void List3::PutItem (int pos, itemType item)
	{
		itemType number = item;
		if(pos > length)
			{
				cout << "position not valid" << endl;
				return;
			}
		//node* nxtnode = new node;
 		node* cur = new node;
		cur-> item = number;
		cur-> next = head;
		
		if (pos == 1)
			{
				head = cur;
			}
		for (int i = 0; i < pos; i++) //sets node before cur to point to curr	
			{
				cur = cur-> next;
				if (i == pos)
					{
					
					}
				
			}
		length++;
	}
				
		
		
				
		

