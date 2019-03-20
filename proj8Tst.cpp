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
		lst-> PutItem(0, thing);
		
		lst->Print();
			
		return 0;
	}
