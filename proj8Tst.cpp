/*
Class: CPSC 122-02 
Team Member 1: Tanner Franz 
Team Member 2: Wesley Muehlhausen
Submitted By: Tanner Franz 
GU Username: tfranz 
File Name: proj8Tst.cpp, proj8.cpp
List3 class functions to manipualte a linked list
To Build: g++ proj8.cpp proj8Tst.cpp
To Execute: ./a.out
*/ 

#include <iostream>
#include <cstring>
using namespace std;

#include "proj8.h"

int main()
	{
		int size = 5;
		List3* lst = new List3;
		
		for (int i = 0; i < size; i++)
			lst->PutItem(i, i);
			lst->Print();
lst->DeleteItem(0);
			lst->PutItem(4,5);
			lst->DeleteItem(0);
			lst->DeleteItem(3);
		lst->Print();
		
		return 0;
	}
