#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string level;
    char ch;
    ch = 'y';

   while (ch == 'y') {
        cout << "Please Input 2-8 but you can only use 1 number\n";
        cout << "Input age:";
        cin >> age;
        if ( age >= 2 && age <= 2) {
            level = "Nursery";
        } else if ( age >= 3 && age <= 3) {
            level = "K1";
        } else if ( age >= 4 && age <= 4) {
            level = "K2";
        } else if ( age >= 5 && age <= 5) {
            level = "K3";
        } else if ( age >= 6 && age <= 6) {
            level = "Y1";
        } else if ( age >= 7 && age <= 7) {
            level = "Y2";
        } else if ( age >= 8 && age <= 8) {
            level = "Y3";                                                                                
        } else {
            cout << "ERROR_404\n";
        }

        if (level != "") {
            cout << "Your level is " << level << "\n"; 
        }
        level = "";

        cout << "Are you continue? (y or n):";
		cin >> ch;
		cout << "\n";
	}
    return 0;
}