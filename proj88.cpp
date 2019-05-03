/*
Class: CPSC 122-02 
Team Member 1: Tanner Franz 
Team Member 2: Wesley Muehlhausen
Submitted By: Tanner Franz 
GU Username: tfranz 
File Name:proj8.cpp, proj8Tst.cpp
List3 class functions to manipualte a linked list
To Build: g++ proj8.cpp proj8Tst.cpp
To Execute: ./a.out
*/ 
#include <iostream>
#include <cstring>
#include <cstdlib>
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
		cur->item;
		int counter = 0;
			while(counter < length)
				{
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
		if(pos >= length)
			{
				cout << "No item to delete in position: " << pos << endl;
				return;
			}
		cout << "DELETE POS: " << pos << endl;
		node* tmp = new node;
		node* prev = new node;
		tmp = ptrTo(pos);
		if(pos == 0)
			{
				head = tmp->next;
				tmp = nullptr;
				delete tmp;
				length--;
				return;
			}
		else
			{
				cout << "Deleteing: " << tmp->item << endl;
				prev = ptrTo(pos-1);
				prev->next = tmp->next;
				delete tmp;
				length--;
			}
		return;
	}
	
		
void List3::Copy(List3* lst)
	{
		node* head1 =lst->head;
		length = lst->GetLength();
		node* saved = new node;
		cout << "COPYING: " << length << " items" << endl;
		int i = 0; 
		while(i < length)
			{
				node* next = new node;
				if(i == 0)
					{
						head = saved;
						saved->next = nullptr;
					}					
				saved->item = lst->GetItem(i);
				saved->next = next;
				saved = next;	
				i++;
				next = nullptr;
				delete next;
			}
		saved = nullptr;
		delete saved;
		
			}
				

		
				
		

