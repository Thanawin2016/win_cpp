#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	int age;
	char ch;
	ch = 'n';

	while (ch == 'n') {
		cout << "Input your name Please:";
	 	cin >> name;
		cout << "Input your age Please:";
		cin >> age;

		cout << "Hello World by: " << name << "\n";
		cout << "Hello World your age is: " << age << "\n";

		cout << "Are you Exit? (y or n):";
		cin >> ch;
		cout << "\n";
	}
	return 0;
}