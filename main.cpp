#include <iostream>
#include "List.cpp"
using namespace std;
int main(){
	arrList list;
	int choice;
	while (true) { 
	cout << "==CONTACT BOOK==" << "\n" << " 1. Add a new contact\n 2. Delete a new contact\n 3. Search a contact\n 4. Exit\n What is your choice?\n";
	cin >> choice;
	if (choice == 1){
		list.insert();
	}
	else if (choice == 2){
		list.remove();
	}
	else if (choice == 3){
		list.search();
	}
	else if (choice == 4){
		break;
	}
	else{
		cout << "Invalid input\n";
	}
	}
	}
