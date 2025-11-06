#include <iostream>
#include <string>

using namespace std;

int main() {
    int numbers[100];
    int length;

    cout << "Input your length:";
    cin >> length; 

    for (int i = 0; i < length; i++) {
        cout << "Input number[" << i << "]:";
        cin >> numbers[i]; 
    } 

     int sum = 0;
    for (int i = 0; i < length; i++) { 
         sum = sum + numbers[i];
    }
    
    cout << "Sum = " << sum;

    return 0;
}