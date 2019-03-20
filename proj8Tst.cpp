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
		int i = 0;
		/*for (itemType value = 0; value < 7; value++)
			{
				lst->PutItem(i, value);
				i++;
			}*/
		//lst-> Print();
		lst-> PutItem(0, thing);
		lst-> PutItem(1, 5);
		lst-> PutItem(1,4);
		lst->PutItem (1, 3);
		lst-> PutItem (1, 2); 
		lst-> PutItem(5, 3);
		
		lst->Print();
			
		return 0;
	}
