#include <iostream>
#include <string>
using namespace std;
struct contact{
	string name;
	int phone;
	string birthday;
	int age;
};
class arrList {
	int number = 1;
	int* contactNum;
	public:
		contact limit[12];
		void insert(){
			cout << " Enter Contact Details:\n Name:";
			cin >> limit[number].name;
			cout << " Mobile Number: ";
			cin >> limit[number].phone;
			cout << " Birthday: ";
			cin >> limit[number].birthday;
			number++;
		};
		void remove(){
			cout << " Enter the mobile number: ";
			cin >> contactNum;
			for(int i = 0;i < 12; i++){
				if(contactNum == limit[i].phone){
					limit[i] = limit[i+1];
				}
			}
			
		};
		void search(){
		cout << " Enter the mobile number: ";
			cin >> contactNum;
			for(int i = 0;i < 12; i++){
				if(contactNum == limit[i].phone){
					cout << "Name: " << limit[i].name << endl;
					cout << "Number: " << limit[i].phone << endl;
					cout << "Birthday: " << limit[i].birthday << endl;
				}
			}
		};


};


