#include <iostream>
#include <cstring>
using namespace std;

#include "proj8.h"

int main()
	{
		int size = 6;
		List3* lst = new List3;
			if (lst->IsEmpty())
				cout << "List is Empty" << endl;

		itemType thing = 7;

		lst-> PutItem (0, thing);
		lst-> PutItem (1, 1);
		lst-> PutItem (1, 2);
		lst-> PutItem (1, 3);
		lst-> PutItem (1, 4); 
		lst-> PutItem (1, 5);
		
		
		lst->Print();
		cout << "List length: " << lst-> GetLength() << endl;
		cout << endl;
		cout << "Get item 2: " << lst-> GetItem(2) << endl;
		cout << "Get item 4: " << lst-> GetItem(4) << endl;
		cout << endl;
		lst->DeleteItem(1);
		lst->DeleteItem(2);
		lst-> Print();
		cout << "List length: " << lst-> GetLength() << endl;
		if (lst->IsEmpty())
			cout << "List is empty" << endl;
		else 
			cout << "List is not empty" << endl;

		cout << "Get item 7: " << lst-> GetItem(7);
			
		return 0;
	}
