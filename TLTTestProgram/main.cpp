#include <iostream>
using namespace std;

int menu();

int main(){
	cout << "TLT Test Menu" << endl;

	menu();
	}

int menu(){
	char ans; // menu item

	do{
		cout << " " << endl;
		cout << "1. stuff" << endl;
		cout << "2. stuff" << endl;
		cout << "3. stuff" << endl;
		cout << "4. stuff" << endl;
		cout << "5. stuff" << endl;
		cout << "6. exit" << endl;

		cin >> ans;
		}
	while (ans != '6');
	return 0;
	}