#include <iostream>
#include <string>

using namespace std;

int main() {
    int numbers[5];

    // cout << "Input number[0]:";
    // cin >> numbers[0];  
    // cout << "Input number[1]:";
    // cin >> numbers[1];
    // cout << "Input number[2]:";
    // cin >> numbers[2];  
    // cout << "Input number[3]:";
    // cin >> numbers[3];  
    // cout << "Input number[4]:";
    // cin >> numbers[4];    
    
    // cout << "Numbers[0] = " << numbers[0];
    // cout << "\n";
    // cout << "Numbers[1] = " << numbers[1];
    // cout << "\n";
    // cout << "Numbers[2] = " << numbers[2];
    // cout << "\n";
    // cout << "Numbers[3] = " << numbers[3];
    // cout << "\n";
    // cout << "Numbers[4] = " << numbers[4];

    int length = size(numbers);
    for (int i = 0; i < length; i++) {
        cout << "Input number[" << i << "]:";
        cin >> numbers[i]; 
    } 

    for (int i = 0; i < length; i++) { 
        cout << "Numbers[" << i << "] = " << numbers[i];
        cout << "\n";
    }

    return 0;
}